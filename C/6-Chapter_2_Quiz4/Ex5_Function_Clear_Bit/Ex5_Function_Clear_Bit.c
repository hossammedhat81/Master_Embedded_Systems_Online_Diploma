#include<stdio.h>

int CLR_BIT(int num , int bit);

int main()
{
    int number , bit;

    printf("Enter number : \n");
    scanf("%d",&number);
    printf("Enter bit you want to clear : \n");
    scanf("%d",&bit);

    number = CLR_BIT(number,bit);

    printf("number after clearing bit is : %d",number);

    return 0;
}

int CLR_BIT(int num , int bit)
{
    num&=~(1<<bit);

    return num;
}
