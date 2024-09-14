#include<stdio.h>

void find_Prime_numbers(int num1 , int num2);

void main()
{
    int num1 ,num2 ;
    printf("Enter Two numbers :\n");
    scanf("%d %d",&num1,&num2);
    printf("Prime numbers between %d and %d are:\n\n",num1,num2);
    find_Prime_numbers(num1,num2);
}

void find_Prime_numbers(int num1, int num2)
{
    int i, j;
    int isPrime;

    for (i = num1 + 1; i < num2; i++)
    {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime && i > 1)
        {
            printf("%d\n", i);
        }
    }
}
