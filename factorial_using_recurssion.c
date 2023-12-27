#include<stdio.h>
long fact(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return(n*fact(n-1));
}
int main()
{
	int f,n;
	printf("\n enter any number:");
	scanf("%d",&n);
	f=fact(n);
	printf("\n the factorial is :%d",f);
	return 0;
}
