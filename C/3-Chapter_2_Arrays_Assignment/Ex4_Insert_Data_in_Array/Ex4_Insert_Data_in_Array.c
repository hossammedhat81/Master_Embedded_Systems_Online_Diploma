#include<stdio.h>
void main()
{
    int num , i , location;
    float arr[100];
    float element;
    printf("Enter the numbers of data :\n");
    scanf("%d",&num);
    
    for(i=0 ; i<num ; i++)
    {
        printf("Enter number %d : \n",i+1);
        scanf("%f",&arr[i]);
    }

    printf("Basic Array:\n");
    for(i=0 ; i<num ; i++)
    {
        printf("%.2f\t",arr[i]);
    } 

    printf("\nEnter element you want to insert : \n");
    scanf("%f",&element);   
    printf("Enter location you want to put in : \n");
    scanf("%d",&location);

    for ( i = num+1; i > location-1; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[location-1]=element;

    printf("Array after inserting data : \n");
    for(i=0 ; i<num+1 ; i++)
    {
        printf("%.2f\t",arr[i]);
    }    
        
}