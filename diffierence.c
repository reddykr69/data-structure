#include<stdio.h>
int diff(int arr[],int n,int a,int b)
{
    for(int i=0;i<n;i++)
       {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==a&&arr[j]==b||arr[i]==b&&arr[j]==a)
            {
                if(i>j)
                return i-j;
            else
            return j-i;
            }
            
            
        }
       }
       return -1;
}
int main()
{
    int arr[100],n,a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    int d=diff(arr,n,a,b);
    printf("%d",d);
    return 0;
}