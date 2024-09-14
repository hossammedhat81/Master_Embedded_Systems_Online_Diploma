#include<stdio.h>
int main()
{
    float num1 , num2 , num3 ;
    while (1)
    {
        printf("Enter First number : ");
        scanf("%f",&num1);
        printf("Enter Second number : ");
        scanf("%f",&num2);    
        printf("Enter Third number : ");
        scanf("%f",&num3);
        if(num1>num2)
        {
            if(num1>num3)
            {
                printf("%f is the largest\n\n",num1);
            }
            else
            {
                printf("%f is the largest\n\n",num3);
            }
        }
        else
        {
            if(num2>num3)
            {
                printf("%f is the largest\n\n",num2);
            }
            else
            {
                printf("%f is the largest\n\n",num3);
            }
        }
    }
}