#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int square(int x) {
    return x * x;
}


int main(int argc, char** argv) {
    char word[6];
    strcpy(word, "hello");
    word[0] = 'j';
    printf("%s\n", word);
    return 0;

}