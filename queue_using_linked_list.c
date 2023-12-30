#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void en(int x)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("queue is overflow\n");
        return;
    }
    newnode->data=x;
    newnode->next=NULL;
    if(front==NULL)
    {
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void de() {
    if (front == NULL) {
        printf("queue is underflow\n");
        return;
    }
    struct node *temp = front;
    printf("number deleted from queue is: %d\n", front->data);
    front = front->next;
    free(temp);
}

void display() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    struct node *ptr = front;
    printf("Queue is: ");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main() {
    en(10);
    en(20);
    en(30);
    display();

    de();
    display();

    return 0;
}
