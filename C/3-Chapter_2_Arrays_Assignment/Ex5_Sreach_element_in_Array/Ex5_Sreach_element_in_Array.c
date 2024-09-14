#include<stdio.h>
void main()
{
    int num , i ;
    float arr[100];
    float element;
    printf("Enter the numbers of data :\n");
    scanf("%d",&num);
    
    for(i=0 ; i<num ; i++)
    {
        printf("Enter number %d : \n",i+1);
        scanf("%f",&arr[i]);
    }

    printf(" Array:\n");
    for(i=0 ; i<num ; i++)
    {
        printf("%.2f\t",arr[i]);
    } 

    while (1)
    { 
      printf("\nEnter element to be searched :\n");
      scanf("%f",&element);
    
      for ( i = 0; i < num; i++)
      {
          if(element==arr[i])
          {
              printf("This element founded in location %d",i+1);
              break;
          }
          else if(i==num-1 &&element!=arr[num-1])
          {
              printf("This element is not here");
          }
      }
    }
    
}
