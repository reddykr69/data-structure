#include<stdio.h>
#include<stdlib.h>
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
while(p!=NULL)
{
    printf("%d ",p->data);
    p=p->next;
}
printf("]");
}
void insert(int data)
{
   struct node *lk=(struct node*)malloc(sizeof(struct node));
   lk->data=data;
   lk->next=head;
    head=lk;
}
void deleteatbegin()
{
    head=head->next;
}
int main()
{
    insert(52);
    insert(55);
    insert(45);
    insert(2);
    insert(5);
print();
deleteatbegin();
print();
return 0;
    
}