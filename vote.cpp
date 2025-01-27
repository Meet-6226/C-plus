#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if (age>=18)
    {
        cout<<"Your are eligible for voting";
    }
    else
    {
        cout<<"Your are not eligible for voting";
    }
};