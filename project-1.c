#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Node {
    char song[100];
    struct Node *next;
};


void LinkedListTraversal(struct Node *head) {
    struct Node *ptr = head;
    if (!ptr) return;

    do {
        printf("Song: %s", ptr->song);  
        ptr = ptr->next;
    } while (ptr != head);
}


struct Node *insertAtFirst(struct Node *head, char songName[]) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    strcpy(ptr->song, songName);
    ptr->next = head;

 
    struct Node *temp = head;
    if (temp) {
        while (temp->next != head)
            temp = temp->next;
        temp->next = ptr;
    } else {
        ptr->next = ptr;  
    }

    return ptr;  
}

int main() {
    int n;
    printf("Enter number of songs: ");
    scanf("%d", &n);
    getchar();  

    struct Node *head = NULL;

    for (int i = 0; i < n; i++) {
        char songName[100];
        printf("Enter song %d: ", i + 1);
        fgets(songName, sizeof(songName), stdin);
        head = insertAtFirst(head, songName);  
    }

    printf("\nYour Playlist:\n");
    LinkedListTraversal(head);

    return 0;
}