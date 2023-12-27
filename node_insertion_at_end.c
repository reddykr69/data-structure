#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
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
void ie(int data)
{
    struct node *lk=(struct node*)malloc(sizeof (struct node));
    lk->data=data;
    lk->next=NULL;
    if(head==NULL)
    {
        head=lk;
    }
    else{
        struct node*l=head;
    while(l->next!=NULL)
    {
l=l->next;}
l->next=lk;
}}
int main()
{
    int k=0;

   ib(12);
   ie(45);
   ie(25);
   ie(35); 
   ie(30);
printf("linked list:");
print();
return 0;
}
