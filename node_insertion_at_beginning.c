#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;;
    
};
struct node *head=NULL;
struct node *current=NULL;
void print()
{
    struct node *p=head;
    printf("\n");
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void ib(int data)
{
    struct node *lk=(struct node*)malloc(sizeof(struct node));
    lk->data=data;
    lk->next=head;
   
    head=lk;
}
int main()
{
    int k=0;
    ib(40);
    ib(30);
    ib(20);
    printf("linked list:");
    print();
   return 0;
}