//insert the last element
#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
};

struct Node *insertAtlast(struct Node *head,int data)
{
 struct Node *ptr=head;
 ptr=ptr->next;
 while(ptr->next!=head)
 {
    ptr=ptr->next;
 }
 struct Node *q=(struct Node*)malloc(sizeof(struct Node));
 q->data=data;
 ptr->next=q;
 q->next=head;

 return head;

}
 void CircularLinkedTraversal(struct Node *head)
 {
    struct Node *p = head;
    printf("Element-%d\n",p->data);
    p=p->next;
    
    while(p!=head)
    {
        printf("Element-%d\n",p->data);
        p=p->next;
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

    head=insertAtlast(head,23);
    CircularLinkedTraversal(head);
    return 0;

}