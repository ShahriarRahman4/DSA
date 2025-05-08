#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *ptr)
{
    if(ptr->f==ptr->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct queue *ptr)
{
    if(ptr->r==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


void enqueue(struct queue *ptr,int value)
{
    if(isFull(ptr))
    {
        printf("Queue is full");
    }
    else
    {
        ptr->r++;
        ptr->arr[ptr->r] = value;

    }
}


int dequeue(struct queue *ptr)
{    int a=-1;

    if(isEmpty(ptr))
    {
        printf("queue is empty");
    }
    else
    {
        ptr->f++;
        a=ptr->arr[ptr->f];

    }
    return a;
}

void printfQueue(struct queue *ptr)
{
    printf("Queue :\n");
    for(int i =ptr->f+1 ; i<=ptr->r ;i++)
    {
      printf("%d\n",ptr->arr[i]);
    }
}


int main()
{
    struct queue *q=(struct queue*)malloc(sizeof(struct queue));
    q->size=5;
    q->f=q->r=0;
    q->arr=(int *)malloc(q->size*sizeof(int));



    enqueue(q,10);
    enqueue(q,11);
    enqueue(q,12);
    enqueue(q,13);
    enqueue(q,14);

    dequeue(q);

    printfQueue(q);

    return 0;

}