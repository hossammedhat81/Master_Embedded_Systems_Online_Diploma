#include<stdio.h>
void main()
{
    int num , i;
    float arr[100];
    float sum=0.0;
    printf("Enter the numbers of data :\n");
    scanf("%d",&num);
    
    for(i=0 ; i<num ; i++)
    {
        printf("Enter number %d : \n",i+1);
        scanf("%f",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Average is %.2f ", sum/num);
    
}