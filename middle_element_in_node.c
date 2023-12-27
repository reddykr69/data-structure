#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

void printMiddle(struct Node* head) {
  struct Node* slow_ptr = head;
  struct Node* fast_ptr = head;

  if (head != NULL) {
    while (fast_ptr != NULL && fast_ptr->next != NULL) {
      fast_ptr = fast_ptr->next->next;
      slow_ptr = slow_ptr->next;
    }
    printf("The middle element is [%d]\n", slow_ptr->data);
  }
}


struct Node* newNode(int data) {
  struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}


void printList(struct Node* head) {
  struct Node* temp = head;
  while (temp != NULL) {
    printf("%d->", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}

int main() {

  struct Node* head = newNode(1);
  head->next = newNode(2);
  head->next->next = newNode(3);
  head->next->next->next = newNode(4);
  head->next->next->next->next = newNode(5);

  
  printList(head);
  printMiddle(head);

  return 0;
}
3