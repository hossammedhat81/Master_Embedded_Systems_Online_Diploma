#include<stdio.h>
void main()
{
    /*This program can be done by strlen()*/
    char Sentence [100]  ;
    int i , count =0;
    printf("Enter the string : \n");
    gets(Sentence);

    for ( i = 0; Sentence[i]!='\0'; i++)
    {
        ++count;
    }

    for(i=count-1 ; i>=0;i--)
    {
        printf("%c",Sentence[i]);
    }
    
 
}