#include<stdio.h>
#include<stdlib.h> 
#include<string.h>

struct bookms
{
    int id;
    char title[100];
    char author[100];
};

int searchBook(int arr[], int target, int limit)
{
    int lo = 0;
    int hi = limit - 1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return -1;
}

void sortBook(struct bookms s[], int n)
{
    for (int i = 1; i < n; i++)
    {
        struct bookms current = s[i];
        int j = i - 1;
        while (j >= 0 && s[j].id > current.id)
        {
            s[j + 1] = s[j];
            j--;
        }
        s[j + 1] = current;
    }
}

int main()
{
    struct bookms s[100];
    int nbook = 0;
    int choice;

    while (1)
    {
        printf("\nWelcome to Ulab Book Management System:\n");
        printf("Please select any option :\n");
        printf("1. Add a new book to the collection.\n");
        printf("2. Remove a book by its unique book ID.\n");
        printf("3. Search for a book by its ID.\n");
        printf("4. Display all books in sorted order by book ID.\n");
        printf("5. Exit\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Book Details:\n");

            s[nbook].id = nbook + 242;
            printf("Book ID = %d\n", s[nbook].id);

            getchar(); 
            printf("Enter title of the book:\n");
            fgets(s[nbook].title, sizeof(s[nbook].title), stdin);

            printf("Enter the name of the author:\n");
            fgets(s[nbook].author, sizeof(s[nbook].author), stdin);

            nbook++;
            continue;
        }
        else if (choice == 2)
        {
            int BookId, found = 0;
            printf("Enter the book ID to remove:\n");
            scanf("%d", &BookId);

            for (int i = 0; i < nbook; i++)
            {
                if (BookId == s[i].id)
                {
                    for (int j = i; j < nbook - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }
                    nbook--;
                    found = 1;
                    printf("The book has been removed successfully.\n");
                    break;
                }
            }
            if (!found)
            {
                printf("The book is not found.\n");
            }
        }
        else if (choice == 3)
        {
            int bookidfors;
            printf("Enter your book ID for search:\n");
            scanf("%d", &bookidfors);

            int idList[100];
            for (int i = 0; i < nbook; i++)
            {
                idList[i] = s[i].id;
            }

            sortBook(s, nbook); 
            for (int i = 0; i < nbook; i++) 
            {
                idList[i] = s[i].id;
            }

            int index = searchBook(idList, bookidfors, nbook);
            if (index != -1)
            {
                printf("Book found:\n");
                printf("ID: %d\n", s[index].id);
                printf("Title: %s\n", s[index].title);
                printf("Author: %s", s[index].author);
            }
            else
            {
                printf("Book not found.\n");
            }
        }
        else if (choice == 4)
        {
            sortBook(s, nbook);
            printf("Displaying all books in sorted order:\n");
            for (int i = 0; i < nbook; i++)
            {
                printf("Book ID: %d\n", s[i].id);
                printf("Title: %s", s[i].title);
                printf("Author: %s", s[i].author);
                printf("-------------------------\n");
            }
        }
        else if (choice == 5)
        {
            printf("Exiting the system.\n");
            break;
        }
        else
        {
            printf("Not a valid option.\n");
        }
    }

    return 0;
}

