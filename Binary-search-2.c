#include<stdio.h>
int main()
{
    int array[100];
    int i ,j ,n;

    printf("Enter number of elements :\n");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(i=0 ; i<n ;i++)
    {
        scanf("%d",&array[i]);
    }
    int target;
    printf("Enter target value :");
    scanf("%d",&target);
    int lo=0;
    int hi=n-1;
    while(lo<=hi)
    {
        int mid=(hi+lo)/2;
        if(array[mid]==target)
        {
            printf("%d found at location %d",target,mid+1);
            return 0;
        }
        else if(array[mid]<target)
        {
            lo=mid+1;
        }
        else
        {
          hi=mid-1;
        }
    }
    printf("%d not found in the array.\n", target);
    return 0;

}