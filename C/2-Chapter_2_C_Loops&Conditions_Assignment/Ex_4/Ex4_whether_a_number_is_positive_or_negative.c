#include<stdio.h>
int main()
{
    float num ;
    while (1)
    {
        printf("Enter number : ");
        scanf("%f",&num);
        if(num > 0)
        {
            printf("%.2f is positive\n ",num);
        }
        else if(num < 0)
        {
            printf("%.2f is negative\n ",num);
        }
        else
        {
            printf("%.2f is zero\n ",num);
        }
    }
}