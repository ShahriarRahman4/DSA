#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data ;
    struct Node *next;

};


 
void LinkedListTraversal(struct Node *ptr)
{
  while(ptr!=NULL)
  {
    printf("Element = %d\n",ptr->data);
    ptr=ptr->next;
  }
}

struct Node *findelement(struct Node *head,int value)
{ 
  struct Node *p=head;
  while(p!=NULL)
  {
     if(p->data==value)
     {
      return p;
     }
     p=p->next;
  }

  return NULL;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head =(struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third =(struct Node *)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=66;
    third->next=NULL;

    LinkedListTraversal(head);
    struct Node *found = findelement(head,11);
    if(found!=NULL)
    {
      printf("value is found %d",found->data);
    }
    else
    {
      printf("value is not found");
    }

    return 0;

}