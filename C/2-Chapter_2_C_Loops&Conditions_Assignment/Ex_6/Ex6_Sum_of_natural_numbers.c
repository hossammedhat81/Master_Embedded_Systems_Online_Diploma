#include<stdio.h>
int main()
{
    int num , i , sum=0;
    printf("Enter number : ");
    scanf("%d",&num);
    for(i=0 ; i<=num ; i++)
    {
        sum=sum+i;
    }
    printf("Sum = %d",sum);

}