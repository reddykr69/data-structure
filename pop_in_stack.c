#include<stdio.h>
#define maxsize 10
int stack[maxsize];
int top=-1;
int full()
{
    if(top==maxsize-1)
    return -1;
else
return 0;
} 
int empty()
{
    if(top==-1)
    {
        return -1;

    }
    else
    return 0;
}
int push(int data)
{
    if(full()!=-1)
    {top++;
        stack[top]=data;
    }
    else
    printf("overflow");
}
int pop()
{
    if(empty()!=-1)
    {
        int data=stack[top];
        top--;
        return data;
    }
    else
    {
        printf("underflow");

    }
}
int main()
{
    push(58);
    push(54);
    push(3);
    push(5);
    push(53);
    push(242);
    push(554);
    printf("stack list before pop:");
    for(int i=0;i<=top;i++)
    {
        printf("%d,",stack[i]);
    }
   
    int popped=pop();
        if(popped!=-1)
        {
            printf("\n%d",popped);
        }
    
    printf("\nstack after pop:");
    for(int j=0;j<=top;j++)
    {
        printf("%d,",stack[j]);
    }
    return 0;
}