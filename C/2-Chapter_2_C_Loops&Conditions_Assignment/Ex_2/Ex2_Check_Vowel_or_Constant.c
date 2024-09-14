#include<stdio.h>
int main()
{
    char Ch;
    printf("Enter an alphapet : ");
    while (1)
    {
        scanf(" %c",&Ch);       //Takecare of space before %c
        if((Ch=='a')||(Ch=='A')||(Ch=='e')||(Ch=='E')||(Ch=='i')||(Ch=='I')||(Ch=='o')||(Ch=='O')||(Ch=='u')||(Ch =='U'))
        {
            printf("%c is a voewl\n",Ch);
        }
        else
        {
            printf("%c is a consonant\n",Ch);
        }
    }
}