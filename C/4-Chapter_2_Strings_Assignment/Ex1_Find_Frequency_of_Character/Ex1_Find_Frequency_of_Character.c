#include<stdio.h>
void main()
{
    char Sentence [100]  , ch ;
    int i , count =0;
    printf("Enter the string : \n");
    gets(Sentence);

    printf("Enter character you want to number it :\n");
    scanf(" %c",&ch);
    for(i=0 ; Sentence[i]!='\0' ; i++)
    {
        if(ch == Sentence[i])
        {
            ++count;
        }
    }
    if(count == 0)
    {
        printf("\nThis character is not found\n");
    }
    printf("\nfreqency of %c is %d",ch,count);
}