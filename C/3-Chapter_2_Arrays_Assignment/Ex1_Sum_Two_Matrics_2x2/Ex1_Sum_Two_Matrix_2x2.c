#include<stdio.h>
void main()
{
    float arr1[2][2] , arr2[2][2] , sum[2][2];
    int i , j ;
    printf("Entering numbers of first Matrix :\n ");
    printf("=========================================\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("Enter number [%d][%d]\n",i,j);
            scanf("%f",&arr1[i][j]);
        }
        
    }
    printf("======================================================================================\n");
    printf("Entering numbers of Second Matrix :\n ");
    printf("=========================================\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("Enter number [%d][%d]\n",i,j);
            scanf("%f",&arr2[i][j]);
        }
        
    }    

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            sum[i][j]=arr1[i][j] + arr2[i][j];
        }
        
    }    

    printf("Sum of two Matrix :\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%.2f\t",sum[i][j]);
            if (j==1) printf("\n");
        }
        
    }  
}