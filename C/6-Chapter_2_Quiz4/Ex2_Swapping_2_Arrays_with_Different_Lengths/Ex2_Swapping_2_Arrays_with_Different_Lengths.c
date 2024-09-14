#include<stdio.h>

// Maximum array size
#define MAX_SIZE 100 

/* Function declarations */
void inputArray(int *arr, int size);
void printArray(int *arr, int size);
void swapArray(int *Arr1, int *Arr2);

int main()
{
    int Arr1[MAX_SIZE];
    int Arr2[MAX_SIZE];
    int size1,size2;


    // Input array size
    printf("Enter size of array1: ");
    scanf("%d", &size1);

    printf("Enter size of array2: ");
    scanf("%d", &size2);

    // Input elements of destination array
    printf("Enter %d elements in source array: ", size1);
    inputArray(Arr1, size1);

    // Input element of destination array
    printf("Enter %d elements in destination array: ", size2);
    inputArray(Arr2, size2);


    /*
    * Print elements of both arrays before swapping
    */
    printf("\n\nSource array before swapping: ");
    printArray(Arr1, size1);

    printf("\nDestination array before swapping: ");
    printArray(Arr2, size2);


    /* Swap elements of both arrays. */
    swapArray(Arr1, Arr2);


    /*
    * Print elements of both arrays after swapping
    */
    printf("\n\nSource array after swapping: ");
    printArray(Arr1, size2);

    printf("\nDestination array after swapping: ");
    printArray(Arr2, size1);


return 0;
}

void inputArray(int *arr, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    }

void printArray(int *arr, int size)
{
    int i;
    // Print elements of array one by one
    for(i=0;i<size;i++)
    {
    printf("%d ",arr[i]);
    }
}

void swapArray(int *Arr1, int Arr2[])
{
    int i;
    for(i=0;i<MAX_SIZE;i++)
    {
    //write any swapping technique
    Arr1[i] ^= Arr2[i];
    Arr2[i] ^= Arr1[i];
    Arr1[i] ^= Arr2[i];


    }
}