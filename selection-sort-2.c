#include<stdio.h>


int main()
{
    int array[100];
    int n;
    int i ,j;
    printf("Enter number of elments :\n");
    scanf("%d",&n);

    printf("Enter %d integers :\n",n);
    for(i = 0 ; i<n ; i++)
    {
        scanf("%d",&array[i]);
    }

    for(i = 0 ; i < n ; i++)
    {
        int min_idx=i;
                                                                                    
        for(j = i+1 ; j<n ; j++)
        {
            if(array[j]<array[min_idx])
            {
                min_idx=j;
            }
        }

        if(i!=min_idx)
        {
            int temp = array[min_idx];
            array[min_idx]=array[i];
            array[i] = temp;


        }
    }

    printf("Sorted list in ascending order:\n");

    for(int i = 0 ; i< n ;i++)
    {
        printf(" %d ",array[i]);
    }
}