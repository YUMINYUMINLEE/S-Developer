all: add-nbo

add-nbo: add-nbo.o
	gcc -o add-nbo add-nbo.o

add-nbo.o: add-nbo.c add-nbo.h
	gcc -c -o add-nbo.o add-nbo.c

clean:
	rm -f *.o
	rm -f add-nbo
