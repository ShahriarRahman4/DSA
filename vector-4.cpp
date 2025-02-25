#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the size :";
    cin>>size;
    vector<int>v(size);

    for(int i = 0 ; i<v.size() ; i++)
    {
        cout<<"Element-"<<i+1<<":";
        cin>>v[i];
    }

    int x;
    cout<<"Enter X :";
    cin>>x;
     
    int occurances=0;

    for(int i = 0 ; i< v.size() ;i++)
    {
       if(v[i]==x)
       {
        occurances++;
       }
    }
    
    cout<<"Value showed "<<occurances<<" times";

    return 0;
}
