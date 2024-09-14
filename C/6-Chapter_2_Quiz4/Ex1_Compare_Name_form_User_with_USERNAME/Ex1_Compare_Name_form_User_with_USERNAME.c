#include<stdio.h>

int compare(char *a,char *b);

int main()
{
    char a [100];
    char b [100];
    char *ptr1 =&a;
    char *ptr2=&b;
    while(1)
    {
        
        printf("Enter a string :\n");
        gets(a);
        printf("Enter second string :\n");
        gets(b);
        int flag = compare(ptr1,ptr2);
        if (flag ==1)
        {
            printf("Identical\n\n");
        }
        else
        {
            printf("Different\n\n");
        }
    }

}

int compare(char *a,char *b)
{
    int i = 0;
    while (a[i]==b[i])
    {
        if(a[i]=='\0'||b[i]=='\0')
        {
            break;
        }
        ++i;
    }
    if(a[i]=='\0'&&b[i]=='\0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
