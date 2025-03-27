//push+pop in stack
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

int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
            return 1;
        }
        else{
            return 0;
        }
}

int pop(struct stack* ptr)
{
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
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
}   
}

void PrintfStack(struct stack *ptr)
{
    printf("Stack : \n");
    for(int i = 0 ; i<=ptr->top ; i++)
    {
        printf("%d\n",ptr->arr[i]);
    }
}

int  main()
{
struct stack *sp =(struct stack *)malloc(sizeof (struct stack));
sp->size=10;
sp->top=-1;
sp->arr=(int *)malloc(sp->size * sizeof(int));
printf("Stack has been created succesfully\n");
push(sp,10);
push(sp,11);
push(sp,12);
push(sp,13);
push(sp,14);
push(sp,15);
push(sp,16);
push(sp,17);
push(sp,18);
push(sp,19);

pop(sp);


printf("Before pushing, Full: %d\n", isFull(sp));
printf("Before pushing, Empty: %d\n", isEmpty(sp));
printf("After pushing, Full: %d\n", isFull(sp));
printf("After pushing, Empty: %d\n", isEmpty(sp));


PrintfStack(sp);


return 0;
}
