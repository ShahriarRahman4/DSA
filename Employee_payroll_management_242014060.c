#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Epm {
    int EmpId;
    char Name[100];
    int salary;
};

struct Node {
    struct Epm data;
    struct Node *next;
};


struct Node* createNode(struct Epm emp) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = emp;
    newNode->next = NULL;
    return newNode;
}


void insertAtEnd(struct Node **head, struct Epm emp) {
    struct Node *newNode = createNode(emp);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node *temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}


void deleteById(struct Node **head, int id) {
    struct Node *temp = *head, *prev = NULL;
    while (temp != NULL && temp->data.EmpId != id) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Employee ID %d not found.\n", id);
        return;
    }
    if (prev == NULL)
        *head = temp->next;
    else
        prev->next = temp->next;
    free(temp);
    printf("Employee ID %d deleted successfully.\n", id);
}


void searchById(struct Node *head, int id) {
    while (head != NULL) {
        if (head->data.EmpId == id) {
            printf("Employee Found: ID=%d, Name=%s, Salary=%d\n",
                   head->data.EmpId, head->data.Name, head->data.salary);
            return;
        }
        head = head->next;
    }
    printf("Employee ID %d not found.\n", id);
}


void sortById(struct Node *head) {
    if (head == NULL) return;
    struct Node *i, *j;
    struct Epm temp;
    for (i = head; i->next != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data.EmpId > j->data.EmpId) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}


void displayAll(struct Node *head) {
    sortById(head);
    while (head != NULL) {
        printf("ID: %d, Name: %s, Salary: %d\n",
               head->data.EmpId, head->data.Name, head->data.salary);
        head = head->next;
    }
}

int main() {
    struct Node *head = NULL;
    int numofemp = 0;
    int choice;

    while (1) {
        printf("\nWelcome to Ulab Employee Payroll Management System:\n");
        printf("1. Add a new employee's salary details\n");
        printf("2. Remove an employee\n");
        printf("3. Search for an employee\n");
        printf("4. Display all employees\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  

        if (choice == 1) {
            struct Epm emp;
            emp.EmpId = 242 + numofemp;
            printf("Employee ID: %d\n", emp.EmpId);
            printf("Enter name of the employee: ");
            fgets(emp.Name, sizeof(emp.Name), stdin);
            emp.Name[strcspn(emp.Name, "\n")] = 0; 
            printf("Enter Salary: ");
            scanf("%d", &emp.salary);
            insertAtEnd(&head, emp);
            numofemp++;
        } else if (choice == 2) {
            int id;
            printf("Enter Employee ID to remove: ");
            scanf("%d", &id);
            deleteById(&head, id);
        } else if (choice == 3) {
            int id;
            printf("Enter Employee ID to search: ");
            scanf("%d", &id);
            searchById(head, id);
        } else if (choice == 4) {
            displayAll(head);
        } else if (choice == 5) {
            printf("Exiting system.\n");
            break;
        } else {
            printf("Not a valid option.\n");
        }
    }
    return 0;
}
