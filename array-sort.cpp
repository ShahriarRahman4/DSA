#include<iostream>
#include<vector>

using namespace std;

void sortZerosandOnes(vector<int> &v ,int x)
{
    int zeros_count=0;
    for(int i = 0 ; i <x ; i++)
    {
        if(v[i]==0)
        {
            zeros_count++;
        }
    }
    for(int i = 0 ; i<x ; i++)
    {
        if(i<zeros_count)
        {
            v[i]=0;
        }
        else
        {
            v[i]=1;
        }
    }
     for(int i = 0 ; i < x ;i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    int n ;
    cin>>n;

    vector<int> v(n);
    for(int i =0 ;i< n ; i++)
    {
        cin>>v[i];
    }

    sortZerosandOnes(v,n);
    
    return 0;

    
}