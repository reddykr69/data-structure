#include<stdio.h>
int array(int a[],int i,int j,int s)
{
    while(i<=j)
    {
        int m=(i+j)/2;
        if(a[m]==s)
        {
            return m;
        }
         if(a[i]<=a[m])
        {
        if(a[i]<=s&&s<a[m])
        {
            j=m-1;
        }    
        else
        {
            i=m+1;
        }

        }
        else{
            if(a[m]<s&&s<=a[j])
            {
                i=m+1;
            }
            else
            {
                j=m-1;
            }
        }
    }
    return -1;
}
int main()
{
    int a[]={3,5,6,7,4,2,2,5},n,s,i,j;
    n=sizeof a/sizeof a[0];
    s=5;
    int result=array(a,0,n-1,s);
    if(result!=-1)
    {
        printf("target %d found at %d",s,result);

    }
    else
    {
        printf("not found");
    }
    return 0;
}