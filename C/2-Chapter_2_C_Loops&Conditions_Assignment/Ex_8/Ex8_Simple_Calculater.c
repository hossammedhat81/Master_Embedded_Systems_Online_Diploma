#include<stdio.h>
int main()
{
    float num1 , num2 ,result ;
    char process ;

    while (1)
    {
        printf("Enter operators from these     +    -   *   / ");
        scanf(" %c",&process);
        printf("Enter frist number : ");
        scanf("%f",&num1);
        printf("Enter Second number : ");
        scanf("%f",&num2);         
        switch (process)
        {
        case '+':
            result = num1+num2;
            printf("%.2f +%.2f = %.2f\n\n ",num1,num2,result);
            break;
        case '-':
            result = num1-num2;
            printf("%.2f -%.2f = %.2f\n\n ",num1,num2,result);
            break;
        case '*':
            result = num1*num2;
            printf("%.2f *%.2f = %.2f\n\n ",num1,num2,result);
            break;
        case '/':
            result = num1/num2;
            printf("%.2f /%.2f = %.2f\n\n",num1,num2,result);
            break;                    
        default:
            printf("please choose from these     +    -   *   / ");
            break;
        }
    }
}       