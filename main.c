#include <stdio.h>
#include <stdlib.h>

int square(int x) {
    return x * x;
}


int main(int argc, char** argv) {
    printf("Size of char: %lu\n", sizeof(char));
    printf("Size of int: %lu\n", sizeof(int));
    printf("Size of size_t: %lu\n", sizeof(size_t));
    return 0;

}