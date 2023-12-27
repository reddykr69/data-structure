#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3,i,n;
	printf("\n enter any n umber:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
	
	printf("\nfibonacci series is:%d",n3);
}
	return 0;
}
