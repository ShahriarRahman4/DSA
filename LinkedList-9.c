//Deleting the element with given value


#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;

    struct Node *next;

};


struct Node *deleteAtvalue(struct Node *head,int value)
{
    struct Node *p=head;
    struct Node *q=head->next;

    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }

    if(q->data==value)
    {
        p->next=q->next;
    }
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

   head=deleteAtvalue(head,11);
   LinkedListTraversal(head);

   return 0;
}