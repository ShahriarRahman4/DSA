#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a letter :"<<endl;
    cin>>ch;
    ch=tolower(ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout<<"Vowel";
        break;
        default:
        cout<<"Consonant";
    }
}