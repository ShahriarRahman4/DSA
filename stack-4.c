#include <stdio.h>
#include <stdlib.h>

#define MAX 4

int stack_arr[MAX];
int top = -1;

void push(int data)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    else
    {
        top = top + 1;
        stack_arr[top] = data;  
    }
}

int pop()
{
    int value;
    if (top == -1)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    value = stack_arr[top];
    top = top - 1;
    return value;
}

void print()
{
    int i;
    if (top == -1)
    {
        printf("Stack is empty!\n"); 
        return;
    }

    printf("Stack elements:\n");
    for (i = 0; i <= top; i++)
    {
        printf("%d\n", stack_arr[i]);
    }
}

int main()
{
    int data;
    push(10);
    push(11);
    push(12);
    push(13);
    
    data = pop();  

    print(); 

    return 0;
}
