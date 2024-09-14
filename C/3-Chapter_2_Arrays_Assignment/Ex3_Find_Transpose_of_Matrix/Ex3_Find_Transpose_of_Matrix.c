#include<stdio.h>
void main()
{
    int R,C,i,j;
    float arr [4][4] , trans [4][4];
    printf("Enter number of Rows :\n");
    scanf("%d",&R);
    printf("Enter number of Coulms :\n");
    scanf("%d",&C);

    for(i=0;i<R ;i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("Enter number [%d][%d]\n",i,j);
            scanf("%f",&arr[i][j]);
        } 
    }

    printf("Array is \n");
    for(i=0;i<R ;i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%.2f\t",arr[i][j]);
            if(j==(C-1))
            {
                printf("\n");
            }   
        } 
    } 

    for(i=0;i<R ;i++)
    {
        for (j = 0; j < C; j++)
        {
            trans[j][i]=arr[i][j];                  //starting with j the i = i then j -- as you will git your valid data not the garbage    
        } 
    }

    printf("===============================================\n");
    printf("After transposing array : \n");

    for(i=0;i<C ;i++)
    {
        for (j = 0; j < R; j++)
        {
            printf("%.2f\t",trans[i][j]);
            if(j==(R-1))
            {
                printf("\n");
            }   
        } 
    } 
     

        
}