#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

int getlines(char filename[MAX_FILE_NAME]);

int main() {
    FILE *f;
    char filename[MAX_FILE_NAME];

    printf("Enter file name: ");
    scanf("%s", filename);

    int n = getlines(filename);
    f = fopen(filename, "r");
    if (f == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    int **matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(f, "%d", &matrix[i][j]);
        }
    }

    if (isMagicSquare(matrix, n)) {
        printf("The matrix is a magic square.\n");
    } else {
        printf("The matrix is not a magic square.\n");
    }

    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    fclose(f);

    return 0;
}

int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        exit(1);
    }

    int ch_read;
    int count = 0;

    while ((ch_read = fgetc(fp)) != EOF) {
        if (ch_read == '\n') {
            count++;
        }
    }

    printf("No. lines: %d\n", count);
    fclose(fp);
    return count;
}

