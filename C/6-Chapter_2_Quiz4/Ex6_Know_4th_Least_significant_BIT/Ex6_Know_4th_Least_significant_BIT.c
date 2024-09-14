#include<stdio.h>

int main()
{
    int num , i ,flag;

    printf("Enter a number : \n");
    scanf("%d",&num);

    printf("Number in binary : \n");
    for(i=31;i>=0;i--)
    {
        flag=num>>i;
        if(flag & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    flag=num>>3;
    if (flag&1)
    {
        printf("\n\n4th Least significant bit is 1");
    }
    else
    {
        printf("\n\n4th Least significant bit is 0");
    }
    
    return 0;
}