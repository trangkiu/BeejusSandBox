#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int sum(int a, int b) {
    return a + b;
}

int romanDict(char a) {
    int result = 0;
    switch (a) {
        case 'I':
            result = 1;
            break;
        case 'i':
            result = 1;
            break;
        case 'V':
            result = 5;
            break;
        case 'v':
            result = 5;
            break;
        case 'X':
            result = 10;
            break;
        case 'x':
            result = 10;
            break;
        case 'L':
            result = 50;
            break;
        case 'l':
            result = 50;
            break;
        case 'C':
            result = 100;
            break;
        case 'c':
            result = 100;
            break;
        case 'D':
            result = 500;
            break;
        case 'd':
            result = 500;
            break;
        case 'M':
            result = 1000;
            break;
        case 'm':
            result = 1000;
            break;
    }
    return result;
}

int main(int argc, char** argv) {
    int input = 0;
    int result = 0;
    if (argc > 1) {
        int counter = 1;
        while (counter < argc) {
            input = atoi(argv[counter]);
            result = sum(result,input);
            counter++;
        }

    }else {
        result = 0;
    }
    printf("%d\n", result);
    return 0;
}

