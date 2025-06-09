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

int romanToInt(char str[], int startIndex) {
    int result = 0;

    for (int i = startIndex; i < strlen(str); i++) {
        int val = romanDict(str[i]);
        if (i == 0) {
            result = val;
            continue;
        }
        int prev = romanDict(str[i - 1]);
        if (val > prev) {
            result = result - prev - prev;
        }
            result += val;
    }

    return result;
}


int main(int argc, char** argv) {
    int input = 0;
    int result = 0;
    int value;
    int n;
    char ch;
    if (argc > 1) {
        int counter = 1;
        while (counter < argc) {
            // Need to check if this is int or char
            n = sscanf(argv[counter], "%d%c", &value, &ch);
            if (n != 1) {
                if (argv[counter][0] == '-') {
                    input = romanToInt(argv[counter], 1);
                    input *= -1;
                }else {
                    input = romanToInt(argv[counter], 0);
                }
                printf("roman %d\n", input);
            }else {
                input = atoi(argv[counter]);
            }
            result = sum(result,input);
            counter++;
        }
    }else {
        result = 0;
    }
    printf("%d\n", result);
    return 0;
}

