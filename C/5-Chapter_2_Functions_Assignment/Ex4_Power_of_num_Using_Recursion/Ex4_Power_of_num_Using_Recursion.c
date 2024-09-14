#include<stdio.h>
int powerr (int base,int power);
void main()
{
    int num , exp;
    printf("Enter base :\n");
    scanf("%d",&num);
    printf("Enter power :\n");
    scanf("%d",&exp);    
    printf("%d ^ %d = %d ",num,exp,powerr(num,exp));
}
int powerr (int base,int power)
{
   if(power!=0)
   {
    return (base*powerr(base,--power));
   }
   else 
   {
    return 1;
   }
   
}