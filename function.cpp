#include<iostream>

using namespace std;

void eligiblityvote(int x)
{
   if(x<18)
   {
    cout<<"Not eligible for vote";
   }
   else
   {
    cout<<"You are eligible for vote";
   }
}

int main()
{
    int age;
    cout<<"Enter your age :";
    cin>>age;

    eligiblityvote(age);
}