#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter any decimal number :"<<endl;
    cin>>num;
    int ans = 0;
    int power=1;

    while(num>0)
    {
        int rem = num%2;
        ans = ans+rem*power;
        power = power * 10;
        num=num/2;

    }

    cout<<"Decimal Number :"<<ans<<endl;

}