#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v;
    int ele,input;
    cout<<"Enter the number of the elements :";
    cin>>ele;

    for(int i = 0 ; i<ele ; i++)
    {   
        cout<<"Enter element-"<<i+1<<endl;
        cin>>input;
        v.push_back(input);

    }


    v.insert(v.begin()+2,99);//insert any element ,here v.begin means-v[0]
    v.erase(v.end()-1);//means last element will be deleted

    cout<<"Elements are :"<<endl;

    for(int i = 0 ; i <ele ;i++)
    {
        cout<<v[i]<<"  ";

    }

    return 0;

}