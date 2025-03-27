#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q)
{
    if(q->r==q->f)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int isFull(struct queue *q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *q,int val)
{
    if(isFull(q))
    {
        printf("This queue is full\n");
    }

    else
    {
        q->r++;
        q->arr[q->r]=val;
       printf("Enqueued element : %d\n",val);
    }
}


int dequeue(struct queue *q)
{
    int a = -1;

    if(isEmpty(q))
    {
        printf("this queue is empty\n");
    }
    else
    {
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}

void printQueue(struct queue *q)
{
    printf("Queue elements :\n");

    for(int i = q->f+1 ; i <=q->r;i++)
{
    printf("%d ",q->arr[i]);

}
printf("\n");
}

int main()
{
    struct queue q;
    q.size=4;
    q.f=q.r=0;
    q.arr=(int *)malloc(q.size*sizeof(int));

    enqueue(&q,10);
    enqueue(&q,11);
    enqueue(&q,12);
    enqueue(&q,13);

    printQueue(&q);
    
    printf("Dequeuing element %d\n",dequeue(&q));

    printQueue(&q);

  

    return 0;
}