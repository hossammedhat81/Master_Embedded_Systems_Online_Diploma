#include <stdio.h>

int main()
{
    int numbers[10], frequency[10];
    int arraySize, outerIndex, innerIndex, occurrence;

    printf("Enter size of array: ");
    scanf("%d", &arraySize);

    printf("Enter elements in array: ");
    for (outerIndex = 0; outerIndex < arraySize; outerIndex++)
    {
        scanf("%d", &numbers[outerIndex]);
        frequency[outerIndex] = -1;  // Initialize frequency array
    }

    for (outerIndex = 0; outerIndex < arraySize; outerIndex++)
    {
        occurrence = 1;
        for (innerIndex = outerIndex + 1; innerIndex < arraySize; innerIndex++)
        {
            if (numbers[outerIndex] == numbers[innerIndex])
            {
                occurrence++;
                frequency[innerIndex] = 0;  // Mark duplicate as counted
            }
        }

        if (frequency[outerIndex] != 0)
        {
            frequency[outerIndex] = occurrence;  // Record occurrences if not marked
        }
    }

    printf("\nUnique elements in the array are: ");
    for (outerIndex = 0; outerIndex < arraySize; outerIndex++)
    {
        if (frequency[outerIndex] == 1)
        {
            printf("%d ", numbers[outerIndex]);  // Print unique elements
        }
    }

    return 0;
}
