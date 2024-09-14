#include<stdio.h>
void Factorial_num(int num);
int factorial =1;
void main()
{
    int num ;
    printf("Enter number that you want factorial to it :\n");
    scanf("%d",&num);
    Factorial_num(num);

}

void Factorial_num(int num)
{
    factorial*=num;
    num--;
    if(num>0)
    {
        Factorial_num(num);
    }
    if(num==0&&factorial>1)
    {
        printf("%d",factorial);
    }
    
}