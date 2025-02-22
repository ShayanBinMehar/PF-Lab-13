#include <stdio.h>
#include <stdlib.h>

int makeEven(int *numbers, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        if (numbers[i] % 2 != 0) {
            numbers[i]--;
        }
    }

    printf("New Array:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("%d\t", numbers[i]);
    }

    return 0;
}

int main() {
    int arraySize;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &arraySize);

    int *numbers = (int*)malloc(arraySize * sizeof(int));

    for (int i = 0; i < arraySize; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    makeEven(numbers, arraySize);

    free(numbers);

    return 0;
}