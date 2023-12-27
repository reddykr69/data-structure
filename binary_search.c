#include<stdio.h>
int main()
{
    int a[100],n,i,j,m,s;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array");
    for(int k=0;k<n;k++)
    {
        scanf("%d",&a[k]);

    }
    printf("enter the value to be searched");
    scanf("%d",&s);
    i=0;
    j=n-1;
    m=(i+j)/2;
while(i<=j)
{
    if(a[m]==s)
    {
       printf("the number %d is found at %d",s,m);
       break;
       
    }
    else if(a[m]<s)
    {
        i=m+1;
    }
    else{
        j=m-1;
    }
    m=(i+j)/2;
}
if(i>j)
{
    printf("the element not found");

}
return 0;

}