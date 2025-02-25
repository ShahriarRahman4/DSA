#include<iostream>
using namespace std;
int largestelementindex(int array[] , int size )
{
    int max =array[0];
    int maxindex=-1;
    for(int  i=0 ;i < size ;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;

}

int main()
{
    int array[7]={1,3,5,6,7,2,7};
    int indexoflargest = largestelementindex(array,7);
    //array[indexoflargest]=-1;
    int largestarray = array[indexoflargest];
    for(int i = 0 ;i<7 ;i++ )
    {
        if(array[i]==largestarray)
        {
            array[i]=-1;
        }
    }
    int indexoftheseclargest = largestelementindex(array,6);
    cout<<array[indexoftheseclargest];

}