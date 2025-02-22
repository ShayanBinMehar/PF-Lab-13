#include <stdio.h>
#include <stdlib.h>

int main() {
    int numElements;
    int maxValue = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &numElements);

    int *numbers = (int*)calloc(numElements, sizeof(int));

    for (int i = 0; i < numElements; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] > maxValue) {
            maxValue = numbers[i];
        }
    }

    printf("The highest value entered is: %d", maxValue);
    free(numbers);

    return 0;
}