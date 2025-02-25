#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter value for a :";
    cin>>a;
    cout<<"Enter value  for b :";
    cin>>b;

    c=a;
    a=b;
    b=c;

    cout<<"After switching :"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    return 0;
    
}