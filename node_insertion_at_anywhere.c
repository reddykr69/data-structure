#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
int data;
struct node *next;
};
struct node *head=NULL;
struct node *current=NULL;
void print()
{
    struct node *p=head;
    printf("\n[");
    while(p != NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("]");

} 
void ib(int data)
{
    struct node *lk=(struct node*)malloc(sizeof(struct node));
    lk->data=data;
    lk->next=head;
    head=lk;
}
void ia(struct node*l,int data)
{
    struct node *lk=(struct node*)malloc(sizeof(struct node));
    lk->data=data;
    lk->next=l->next;
    l->next=lk;
}
void main()
{
    int k=0;
    ib(85);
    ib(40);
    ib(25);
    ia(head,35);
    printf("linked list :");
    print();
    
}