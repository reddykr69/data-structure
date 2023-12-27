#include<stdio.h>
#define maxsize 10
int stack[maxsize];
int top=-1;
int isfull()
{
    if(top==maxsize-1)
    return -1;
else 
return 0;
}

int push(int data)
{
    if(isfull()!=-1)
    {
        top++;
        stack[top]=data;
    }
    else
    {
        printf("over flow");
    }
}
int main()
{
    push(28);
    push(14);
    push(66);
    push(32);
    push(77);
    push(654);
    push(2865);
    push(00);
    printf("stack elements:");
    for(int i=0;i<maxsize;i++)
    {
        printf("%d,",stack[i]);
    }
    return 0;
    
}