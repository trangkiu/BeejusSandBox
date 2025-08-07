#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAP_SIZE 26

typedef struct {
    char key;
    int value;
} Tabule;

Tabule map[MAP_SIZE];
int map_count = 0;

int get(char key) {
    for (int i = 0; i < map_count; i++) {
        if (map[i].key == key) {
            return map[i].value;
        }
    }
    return -1;
}

void set (char key) {
    for (int i = 0; i < map_count; i++) {
        if (map[i].key == key) {
            map[i].value = map[i].value + 1;
            return;
        }
    }
    if (map_count < MAP_SIZE) {
        map[map_count].key = key;
        map[map_count].value = 1;
        map_count++;
    }
}

void print_map() {
    for (int i = 0; i < map_count; i++) {
        printf("%c %d\n", map[i].key, map[i].value);
    }

}

int main(int argc, char** argv) {
    if (argc > 1) {
        int counter = 1;
        while (counter < argc) {
            for (int i = 0; i < strlen(argv[counter]); i++) {
                set(argv[counter][i]);
            }
            counter++;
        }
    }
    print_map();
}