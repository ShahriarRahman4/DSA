#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct bookms
{
    int id;
    char title;
    char author;
};

int searchBook(int arr[],int target,int limit)
{
    int lo =0;
    int hi = limit-1;

    while(lo<=hi)
    {
        int mid = (lo+hi)/2;

        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        {
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }
    return -1;
}

void sortBook(struct Bookms s[],int n)

{  

    for(int i =1;i<n;i++)
    {
        struct Bookms current = s[i];
        int j = i-1;
        while(j>=0 && s[j].id>current.id)
        {
            s[j+1]=s[j];
            j--;
        }
        s[j+1]=current;

    }
}