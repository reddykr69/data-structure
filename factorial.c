#include<stdio.h>
long fib(int n)
{
	int n1=0,n2=1,n3;
	if(n>0)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d",n3);
		fib(n-1);
	}
}
int main()
{
	int n;
	printf("\n e nter any number:");
	scanf("%d",&n);
	printf("\n fibonacci series is:");
	fib(n-2);
	return 0;
}
