#include <stdio.h>
#include <stdlib.h>


int* allocatearray(int size) {
    return (int *)malloc(size * sizeof(int));
}

void fillwithones(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 1;
    }
}


void printarray(int *arr, int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void freearray(int *arr) {
    free(arr);
}

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int *array = allocatearray(size);
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    fillwithones(array, size);
    printarray(array, size);

    freearray(array);
    return 0;
}
