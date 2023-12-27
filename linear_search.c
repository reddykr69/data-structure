#include<stdio.h>
int main()
{
    int a[100],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&j);
    for(i=0;i<n;i++)
{
    if(a[i]==j)
    {
        printf("element %d is found at index %d",j,i);
        break;
    }
}
if(i==n)
{
    printf("element not found");

}
return 0;
}