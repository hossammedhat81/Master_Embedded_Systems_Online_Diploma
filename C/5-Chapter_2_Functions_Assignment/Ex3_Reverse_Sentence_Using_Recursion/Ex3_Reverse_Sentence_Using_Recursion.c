#include<stdio.h>
void Reverse(void);
void main()
{
    printf("Enter your sentence :\n");
    Reverse();
}


void Reverse( void)
{
    char c;
    scanf("%c",&c);
    if(c!='\n')
    {
        Reverse();
        printf("%c",c);
    }
}