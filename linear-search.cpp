#include<iostream>

using namespace std;

int main()
{
    int array[5]={4,8,3,11,5};
    int value;
    cout<<"Enter the value for search :";
    cin>>value;
    int pos=-1;
    for(int i = 0 ; i<5 ; i++)
    {
        if(array[i]==value)
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
    {
        cout<<"Not found";
    }
    else
    {
        cout<<"position = "<<pos+1;

    }

    return 0 ;
}