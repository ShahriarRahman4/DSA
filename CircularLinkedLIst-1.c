#include<stdio.h>
#include<stdlib.h>


struct Node 
{
    int data;

    struct Node *next;
};

void CircularLinkedListTr(struct Node *head)
{
  struct Node *ptr=head;
  printf("Element - %d\n",ptr->data);
  ptr=ptr->next;

  while(ptr!=head)
  {
    printf("Element - %d\n",ptr->data);
    ptr=ptr->next;
  }
}


int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=15;
    third->next=fourth;

    fourth->data=19;
    fourth->next=head;


  CircularLinkedListTr(head);

  return 0;

}
