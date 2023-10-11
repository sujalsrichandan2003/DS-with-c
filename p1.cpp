#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void linkedListTraversal(struct node* ptr)
{
  while(ptr!=NULL)
  {
      printf("%d \n",ptr->data);
  ptr = ptr->next;
  }

}

int main(){
  struct node* head;
  struct node* second;
  struct node* third;

  head = (struct node*)malloc(sizeof(struct node));
  second = (struct node*)malloc(sizeof(struct node));
  third = (struct node*)malloc(sizeof(struct node));

  head->data = 1;
  head->next = second;

  second->data = 11;
  second->next = third;

  third->data = 66;
  third->next = NULL;
  
  linkedListTraversal(head);
  return 0;
}
