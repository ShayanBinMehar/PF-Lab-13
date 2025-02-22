#include <stdlib.h>
#include <stdio.h>

int main() {
    int numElements, temp, maxFrequency, mostFrequentIndex;
    int smallestFrequent;
    maxFrequency = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &numElements);

    int *numbers = (int*)malloc(numElements * sizeof(int));
    for (int i = 0; i < numElements; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int *frequencyCounts = (int*)calloc(numElements, sizeof(int));
    frequencyCounts[0] = 1;
    for (int i = 1; i < numElements; i++) {
        temp = numbers[i];
        for (int j = 0; j <= i; j++) {
            if (temp == numbers[j]) {
                frequencyCounts[i]++;
            }
        }
    }

    for (int i = 0; i < numElements; i++) {
        if (frequencyCounts[i] > maxFrequency) {
            maxFrequency = frequencyCounts[i];
            mostFrequentIndex = i;
        }
    }

    smallestFrequent = numbers[mostFrequentIndex];
    for (int i = 0; i < numElements; i++) {
        if (frequencyCounts[i] == maxFrequency) {
            if (numbers[i] < smallestFrequent) {
                smallestFrequent = numbers[i];
            }
        }
    }

    printf("The