#include <stdio.h>

int main()
{
    int numbers[10];
    int numElements, index;

    printf("Enter size of the array: ");
    scanf("%d", &numElements);

    printf("Enter elements in array: ");
    for (index = 0; index < numElements; index++)
    {
        scanf("%d", &numbers[index]);
    }

    printf("\nArray in reverse order: ");
    for (index = numElements - 1; index >= 0; index--)
    {
        printf("%d ", numbers[index]);
    }

    return 0;
}
