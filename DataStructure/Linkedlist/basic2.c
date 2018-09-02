#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
  struct Node* first=NULL;
  struct Node* second=NULL;
  struct Node* third=NULL;

  first=(struct Node*)malloc(sizeof(struct Node));
  second=(struct Node*)malloc(sizeof(struct Node));
  third=(struct Node*)malloc(sizeof(struct Node));

  first->data = 1;
  first->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = NULL;

  printf("first address:%u\t data: %d \t node=%d \n",&first->data,first->data,first->next);
  printf("second address:%u\t  data: %d \t node=%d \n",&second->data,second->data,second->next);
  printf("third address:%u\t First data: %d \t node=%d \n",&third->data,third->data,third->next);

  return 0;
}
