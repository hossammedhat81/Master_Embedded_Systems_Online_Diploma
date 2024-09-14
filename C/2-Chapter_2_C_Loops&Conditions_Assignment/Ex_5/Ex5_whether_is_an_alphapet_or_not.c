#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    while (1)
    {
       scanf(" %c",&ch);          //do not forget space
        if(( (ch>=65) && (ch<91))||( (ch>=97) && (ch<123) ))        //numbers of alphapets from ASCII Table
        {
            printf("%c is an alphapet\n",ch);
        }
        else
        {
            printf("%c is not alphapet\n",ch);
        }
    }
}   