#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the size :";
    cin>>size;
    vector<int>v(size);


    for(int i = 0 ; i < size ; i++)
    {
       cout<<"Element "<<i+1<<":";
        cin>>v[i];
    }
    int x;
    cout<<"Enter x :";
    cin>>x;

    int occurance=-1;
    for(int i = 0 ; i<v.size(); i++)
    {
        if(v[i]==x)
        {
          occurance=i;
        }
    }

    cout<<"position = "<<occurance+1;

}
