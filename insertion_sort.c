#include<stdio.h>
void insertionsort(int arr[],int size)
{
    int i,j,k;
    for(i=1;i<size;i++)
    {
        k=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>k)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=k;
    }
}
void print(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d,2",arr[i]);

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
    insertionsort(arr,size);
    printf("numbers after sorting:\n");
    print(arr,size);
return 0;
}