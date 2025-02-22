#include <stdio.h>
#include <stdlib.h>

int main() {
    int numElements, insertionIndex, insertionValue;
    int deletionIndex;

    printf("Enter the number of elements: ");
    scanf("%d", &numElements);

    int *numbers = (int*)calloc(numElements, sizeof(int));

    for (int i = 0; i < numElements; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int choice;
    printf("Enter your Choice\n1. for Insertion\n2. for Deletion\n3. for exit\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the index at which you want to insert the number: ");
            scanf("%d", &insertionIndex);

            if (insertionIndex >= numElements) {
                printf("Index Does Not Exist\n");
                break;
            }

            printf("Enter the number to insert: ");
            scanf("%d", &insertionValue);

            numbers = realloc(numbers, numElements + 1);
            numbers[numElements] = numbers[insertionIndex];
            numbers[insertionIndex] = insertionValue;

            printf("New Array\n");
            for (int i = 0; i < numElements + 1; i++) {
                printf("%d\t", numbers[i]);
            }
            break;

        case 2:
            printf("Enter the index of the number you want to delete: ");
            scanf("%d", &deletionIndex);

            if (deletionIndex >= numElements) {
                printf("Index Does Not Exist\n");
            }

            int *newNumbers = (int *)calloc(numElements - 1, sizeof(int));
            for (int i = 0; i < deletionIndex; i++) {
                newNumbers[i] = numbers[i];
            }
            for (int i = deletionIndex; i < numElements - 1; i++) {
                newNumbers[i] = numbers[i + 1];
            }

            printf("New Array\n");
            for (int i = 0; i < numElements - 1; i++) {
                printf("%d\t", newNumbers[i]);
            }

            free(newNumbers);
            break;

        case 3:
            break;
    }

    free(numbers);

    return 0;
}