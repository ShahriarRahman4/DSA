//Delete first node
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;

    struct Node *next;
};

struct Node *DeleteAtFirst(struct Node *head)
{
    struct Node *ptr=head;
    head=head->next;
    free(ptr);

    return head;
    
}


void LinkedListTraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
      printf("Element-%d\n",ptr->data);
      ptr=ptr->next;
    }
}



int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=15;
    third->next=NULL;
    
    head=DeleteAtFirst(head);
    LinkedListTraversal(head);
   

    return 0;
}












