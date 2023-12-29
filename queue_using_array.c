#include<stdio.h>
#include<stdlib.h>
#define size 10
int queue[size];
int front=-1;
int rear=-1;
void en(int x)
{
    if(rear==size-1)
    {
        printf("queue is overflow");
        
    }
    else{
        rear++;
        queue[rear]=x;

    }
    if(front==-1)
    {
        front=0;
    }
}
void de()
{
    if(front==-1||front>rear)
    {
        printf("queue is underflow\n");
        
    }
    else{
        printf("number deleted from queue is %d\n",queue[front]);
        front++;
        
    }
}
void display()
{if(front==-1)
{
    printf("queue is empty\n");
}
printf("the queue is :\n");
    for(int i=front;i<=rear;i++)
{
    printf("%d ",queue[i]);
}printf("\n");
}
int main()
{int n,x;
printf("enter the size");
scanf("%d",&n);
    for(int j=0;j<n;j++){
   printf("Enter the element to enqueue: ");
                scanf("%d", &x);
                en(x);}
    display();
    de();
    de();
    display();
    return 0;

}