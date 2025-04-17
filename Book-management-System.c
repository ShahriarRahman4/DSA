#include<stdio.h>
#include<Stdlib.h>
#include<string.h>

struct bookms
{
    int id;
    char title[100];
    char author[100];
};

void searchBook(int arr[],int target,int limit)
{
    int lo = 0;
    int hi=limit-1;
    while(lo<=hi)
    {
        int mid = (lo+hi)/2;
        if(mid==target)
        {
            return mid;
        }
        else if (arr[mid]<target)
        {
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }
        
    }
}

void SortBook(int array[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        int current = array[i];
        int j=i-1;
        while(j>=0 && array[j]>current)
        {
           array[j+1]=array[j];
           j--;
        }
        array[j+1]=current;
    }
}

int main()
{
    struct bookms s[100];
    int nbook=0;
    int choice;

    while(1)
    {
        printf("Welcome to Ulab Book Management System:\n");
        printf("Please select any option :\n");
        printf("1.Add a new book to the collection.\n");
        printf("2. Remove a book by its unique book ID.\n");
        printf("3. Search for a book by its ID.\n");
        printf("4.Display all books in sorted order by book ID.\n");
        scanf("%d",&choice);

        if(choice==1)
        {   
            printf("Enter Book Details:\n ");
          
            s[nbook].id=nbook+242;
            printf("Book ID = %d",s[nbook].id);
            printf("Enter title of the book :\n");
            getchar();
            fgets(s[nbook].title,sizeof(s[nbook].title),stdin);
            printf("Enter the name of the author: \n");
            getchar();
            fgets(s[nbook].author,sizeof(s[nbook].author),stdin);

            nbook++;
            break;
        }
        else if(choice==2)
        {
            int BookId;
            printf("Enter the book Id:\n");
            scanf("%d",&BookId);
            for(int i = 0 ; i<=nbook;i++)
            {
            if(BookId==s[i].id)
            {
                s[i].id=s[i+1].id;
                printf("The book has been removed succesfully.\n");
                break;
            }
            else
            {
                printf("The book is not found\n");
                break;
            }
            }

        }
        else if (choice==3)
        {
            printf("Enter your book id for search :\n");
            int bookidfors;
            scanf("%d",&bookidfors);
            SearchBook(s,bookidfors,nbook);
        }
        else if(choice == 4)
        {
            printf("Displying all the book in sorted order:\n");
            SortBook(s,nbook);
        }
        else
        {
            printf("Not a valid option");
        }
        
        
    }

    return 0;

}