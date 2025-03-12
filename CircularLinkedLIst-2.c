 //circular linked list insertion
 #include<stdio.h>
#include<stdlib.h>


struct Node 
{
    int data;

    struct Node *next;
};

struct Node *CLLinsertion(struct Node *head,int value)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=value;
    struct Node *p=head->next;
    while(p->next!=head)
    {
      p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}

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

  head=CLLinsertion(head,1);
  CircularLinkedListTr(head);

  return 0;

}
