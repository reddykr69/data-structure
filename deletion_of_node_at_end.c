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
void insertatbegin(int data)
{
    struct node *lk=(struct node*)malloc(sizeof(struct node));
    lk->data=data;
    lk->next=head;
    head=lk;
}

void deleteatend(){
   struct node *a = head;
   while (a->next->next != NULL)
      a = a->next;
   a->next = NULL;
}
int main()
{int k=0;
   insertatbegin(12);
   insertatbegin(22);
   insertatbegin(30);
   insertatbegin(40);
   insertatbegin(55);
   print();
   deleteatend();
   print();

   return 0; 
}