#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *file;
    int c;
    int inWord = 0;
    int count = 0;

    if (argc < 2) {
        printf("Usage: %s filename\n", argv[0]);
        return 1;
    }

    file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Error: could not open file %s\n", argv[1]);
        return 1;
    }

    while ((c = fgetc(file)) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1; 
            count++;
        }
    }

    fclose(file);

    printf("Number of words: %d\n", count);

    return 0;
}