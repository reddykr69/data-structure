#include<stdio.h>
void bubblesort(int arr[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[j]>arr[j+1])
            {int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;}
        }
    }
}
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d,",arr[i]);
    }printf("\n");
}
int main()
{
     int arr[100],size;
    printf("enter the size ");
    scanf("%d",&size);
    printf("enter the numbers");
    for(int h=0;h<size;h++)
    {
        scanf("%d",&arr[h]);
    }
    printf("numbers before sorting:\n");
    print(arr,size);
    bubblesort(arr,size);
    printf("numbers after sorting:\n");
    print(arr,size);
return 0;
}