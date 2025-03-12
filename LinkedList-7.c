//Deleting the element from given index

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;

    struct Node *next;

};
struct Node *DeleteAtIndex(struct Node *head,int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for(int i=0 ; i<index-1 ; i++)
    {
       p=p->next;
       q=q->next;
    }
    p->next=q->next;
    free(q);

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
   fourth->next=NULL;

   head=DeleteAtindex(head,2);
   LinkedListTraversal(head);

   return 0;
}