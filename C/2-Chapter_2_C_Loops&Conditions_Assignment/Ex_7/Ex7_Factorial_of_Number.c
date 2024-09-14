#include<stdio.h>
int main()
{
    int num , fac= 1 , i; 
    printf("Enter a number : ");
    while (1)
    {
        scanf("%d",&num);
        if(num>0)
        {
        for(i=num ; i>0 ; i--)
        {
            fac=i*fac;
        }
        printf("factorial of %d is %d\n\n",num,fac);
        fac=1;
        }
        else if(num==0)
        {
         printf("factorial of 0 is 1\n\n");       
        }
        else
        {
        printf("put positive number\n\n"); 
        }
    }
}