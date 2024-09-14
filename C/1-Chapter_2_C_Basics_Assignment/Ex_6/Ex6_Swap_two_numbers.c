#include<stdio.h>
int main()
{
    float num1 , num2 , temp; 
    printf("Enter first Number : ");
    scanf("%f",&num1);
    printf("Enter second Number : ");
    scanf("%f",&num2);
    temp=num2;
    num2 = num1 ; 
    num1 = temp;
    printf("Numbers after swapping : \n");
    printf("First Number : %.2f\n",num1);
    printf("Second Number :%.2f",num2);

}