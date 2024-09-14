#include<stdio.h>

void Reverse_arr(int *ptr ,int size);

int main()
{
    int arr[20],size,i;
    printf("Enter size of array :\n");
    scanf("%d",&size);
    printf("Enter array elements : \n");
    for(i=0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    Reverse_arr(arr,size);

    return 0 ;
}

void Reverse_arr(int *ptr,int size)
{
    int i,j,temp;
    for(i=0,j=size-1;i<=j;i++,j--)
    {
        temp=ptr[i];
        ptr[i]=ptr[j];
        ptr[j]=temp;
    }
    printf("Array after reversing : \n");

    for(i=0 ; i<size ; i++)
    {
        printf("%d\t",ptr[i]);

    }

}