#include<stdio.h>
#include<math.h>

int checkPowerOf3 (unsigned n);

int main()
{
    unsigned int num ;
    while(1)
    {
        printf("Enter a anumber \n");
        scanf("%d",&num);
        checkPowerOf3(num) ? printf("%d ==> 0\nso this is power of three\n\n",num) : printf("%d ==> 1\nso this is not power of three\n\n",num);
    }
}

int checkPowerOf3 (unsigned n)
{
    double i = log10(n)/log10(3);

    return i==trunc(i);
}
