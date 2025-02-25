//difference between even and odd numbers in an array
#include<iostream>
using namespace std;


int main()
{
    int size;
    cout<<"Enter the  size of array :";
    cin>>size;

    int array[size];

    for(int i =0 ;i < size ; i++)
    {
        cout<<"Element-"<<i+1<<":";
        cin>>array[i];
    }
    int sum=0;

    for(int i = 0 ;i <size ;i++)
    {
        if(array[i]%2==0)
        {
            sum=sum+array[i];
        }
        else
        {
            sum=sum-array[i];
        }
    }


    cout<<"sum = "<<sum;

    return 0;
}