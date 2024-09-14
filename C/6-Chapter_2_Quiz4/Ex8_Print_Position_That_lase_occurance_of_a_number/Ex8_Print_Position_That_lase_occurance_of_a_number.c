#include<stdio.h>

int last_occurance (int*PtrArr , int size);

int main()
{
    int arr[100], size ,i,*Ptr_Arr;
    Ptr_Arr=arr;
    printf("Enter size of array : \n");
    scanf("%d",&size);
    for (i = 0; i < size; i++)
    {
        printf("Enter element %d :\n",i+1);
        scanf("%d",&arr[i]);
    }
    int last =last_occurance(Ptr_Arr , size);
    printf("Last occurrence is %d",last); 
    
}

int last_occurance (int*PtrArr , int size)
{
    int get_key,i;
    printf("Enter the number you want to ger its last occurance : ");
    scanf("%d",&get_key);
    for(i=size ; i>0;i--)
    {
        if(PtrArr[i]==get_key)
        {
            return i+1;
        }
       
    }
     return -1;
}