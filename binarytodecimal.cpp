#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter any Binary number :";
    cin>>num;
    int power = 1;
    int ans = 0;
    int lastdigit;

    while(num>0)
    {
        lastdigit = num % 10;
        ans = ans + (lastdigit*power);
        power = power * 2;
        num = num /10;
    }

    cout<<"Decimal Number : "<<ans<<endl;

    return 0;
}