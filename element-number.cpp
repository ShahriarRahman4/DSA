#include<iostream>

using namespace std;

int main()
{
    int array[]={1,2,3,4};

    cout<<sizeof(array)<<endl;

    int element = sizeof(array)/sizeof(array[0]);
    cout<<"Number of elements in the array : "<<element;

    return 0;
}