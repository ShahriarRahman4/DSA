#include<iostream>
using namespace std;
int main()
{
    int array[9]={1,1,2,2,3,3,5,6,6};
    int size = 9;

    for(int i = 0 ; i <size ;i++)
    {
        for(int j = i+1 ; j<size ;j++)
        {
            if(array[i]==array[j])
            {
                array[i]=array[j]=-1;
            }
        }
    }

    for(int i = 0 ; i< size ;i++)
    {
        if(array[i]!=-1)
        {
            cout<<array[i];
        }
    }

    return 0;
}