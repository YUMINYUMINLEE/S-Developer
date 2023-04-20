#include <stdio.h>
#include <stdint.h>
#include "add-nbo.h"


int main(int argc, char* argv[]) {


    if (argc != 3) {
        printf("syntax : add-nbo <file1> <file2>\n");
        return 1;
    }

    uint32_t num1 = read_nbo(argv[1]);
    uint32_t num2 = read_nbo(argv[2]);

    add_and_print_nbo(num1, num2);

    return 0;
}
