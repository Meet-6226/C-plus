#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number : ";
    cin>>a;

    if (a>=0)
    {
        if (a>0)
        {
        cout<<"The entered no. is positive "<<endl;
        }
        else
        {
            cout<<"The entered no. is zero";
        }
        if (a%2 == 0)
    {
        cout<<"The entered no. is even";
    }
    else
    {
        cout<<"The entered no. is odd";
    }
    }
    else
    {
        cout<<"The entered no. is negative";
    }
};