#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>

uint32_t read_nbo(const char* filename) {
    FILE* file = fopen(filename, "rb");
    uint32_t number = 0;

    if (file) {
        fread(&number, sizeof(uint32_t), 1, file);
        fclose(file);

        number = __builtin_bswap32(number);
    }

    return number;
}

void add_and_print_nbo(uint32_t num1, uint32_t num2) {
    uint32_t result = num1 + num2;

    printf("%u(0x%x) + %u(0x%x) = %u(0x%x)\n", num1, num1, num2, num2, result, result);
}
