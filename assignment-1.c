#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char song[100];
    struct Node *next;
};

void CircularLinkedListTr(struct Node *head, int repeatTimes) {
    if (head==NULL) 
    {
    return;
    }
    struct Node *ptr = head;
    int count = 0;

    do {
        printf("Now Playing: %s", ptr->song);
        ptr = ptr->next;
        count++;

        if (count % repeatTimes == 0) {
            char choice;
            printf("\n Continue playing? (y or n): ");
            scanf(" %c", &choice);
            if (choice == 'n' || choice == 'N') 
            {
                break;
            }
        }

    } while (1);
}

void freeList(struct Node *head) {
    if (head==NULL)
    { 
        return;
    }

    struct Node *temp = head;
    struct Node *nextNode;

    do {
        nextNode = temp->next;
        free(temp);
        temp = nextNode;
    } while (temp != head);
}

int main() {
    int n;
    printf("Enter the number of songs: ");
    scanf("%d", &n);
    getchar();

    struct Node *head = NULL, *last = NULL;

    for (int i = 0; i < n; i++) {
        struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter song %d: ", i + 1);
        fgets(ptr->song, sizeof(ptr->song), stdin);

        ptr->next = head;

        if (head == NULL)
        {
            head = ptr;
        }
        else
        {
            last->next = ptr;
        }

        last = ptr;
    }

    if (last != NULL) 
    {
     
       last->next = head;
    }

    printf("\nRepeating Playlist:\n");
    CircularLinkedListTr(head, n);

    freeList(head);

    return 0;
}
