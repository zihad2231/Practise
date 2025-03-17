#include <stdio.h>

#define ROWS 3
#define COLS 3

void printArray(int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void addArrays(int arr1[ROWS][COLS], int arr2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

int main() {
    int array1[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[ROWS][COLS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[ROWS][COLS];

    addArrays(array1, array2, result);

    printf("Array 1:\n");
    printArray(array1);

    printf("Array 2:\n");
    printArray(array2);

    printf("Result of addition:\n");
    printArray(result);

    return 0;
}