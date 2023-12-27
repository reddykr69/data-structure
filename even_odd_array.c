#include<stdio.h>
int main()
{
    int a[100],n,i,count=0,sum=0;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("ente the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
printf("even numbers in array:");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d ",a[i]);
            count++;
        }
       
    }
    printf("\nno of even number:%d",count);
    printf("\nodd numbers in array:");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d ",a[i]);
            sum++;
        }
       
    }
    printf("\nno of even number:%d",sum);
    return 0;

}