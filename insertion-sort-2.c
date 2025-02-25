#include<stdio.h>

int main()
{
    int array[100];
    int i,j,n;

    printf("Enter number of elements :\n");
    scanf("%d",&n);

    printf("Enter %d intergers : \n",n);
    for(i=0 ;i<n ;i++)
    {
        scanf("%d",&array[i]);
    }


for(i = 0 ; i<n ;i++)
{
    int current = array[i];
    int j= i-1;

    while(j>=0  && array[j]>current)
    {
        array[j+1]=array[j];
        j--;
    }
    array[j+1]=current;

}

printf("Sorted list in ascending order :\n");

for(i=0 ;i<n ; i++)
{
    printf("%d                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     ",array[i]);
}
    
}