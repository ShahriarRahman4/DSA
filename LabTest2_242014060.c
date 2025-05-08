//Name:Md.Shahriar rahman
//ID:242014060
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack {
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

int pop(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("Stack is empty\n");
        return -1;
    } else {
        int val = ptr->arr[ptr->top--];
        printf("Popped: %d\n", val);
        return val;
    }
}

void push(struct stack *ptr, int val) {
    if (isFull(ptr)) {
        printf("Stack overflow! Cannot push %d to the stack\n", val);
    } else {
        ptr->arr[++(ptr->top)] = val;
    }
}

void printStack(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("Stack is empty\n");
    } else {
        printf("Current stack: ");
        for (int i = ptr->top; i >= 0; i--) {
            printf("%d ", ptr->arr[i]);
        }
        printf("\n");
    }
}

int main() {
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    int n;
    char input[100];

    printf("Enter number of operations:\n");
    scanf("%d", &n);
    getchar();

    while (n--) {
        fgets(input, sizeof(input), stdin);

        char command[10];
        int value;

        if (sscanf(input, "%s %d", command, &value) == 2 && strcmp(command, "push") == 0) {
            push(sp, value);
        } else if (sscanf(input, "%s", command) == 1) {
            if (strcmp(command, "pop") == 0) {
                pop(sp);
            } else if (strcmp(command, "display") == 0) {
                printStack(sp);
            } else {
                printf("Invalid operation\n");
            }
        } else {
            printf("Invalid input format\n");
        }
    }

    free(sp->arr);
    free(sp);
    return 0;
}
