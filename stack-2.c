//push in stack
#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack* ptr ,int val)
{
    if(isFull(ptr))
    {
        printf("Stack overflow!Can not push %d to the stack\n",val);
        
    }
    else
    {
        ptr->top++;
 
    ptr->arr[ptr->top]=val;
}    }

int  main()
{
struct stack *sp =(struct stack *)malloc(sizeof (struct stack));
sp->size=10;
sp->top=-1;
sp->arr=(int *)malloc(sp->size * sizeof(int));
printf("Stack has been created succesfully\n");
push(sp,56);
push(sp,56);
push(sp,56);
push(sp,56);
push(sp,56);
push(sp,56);
push(sp,56);
push(sp,56);
push(sp,56);
push(sp,56);



printf("After pushing, Full: %d\n", isFull(sp));


return 0;
}
