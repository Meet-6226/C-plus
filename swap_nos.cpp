#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout<<"Enter two nos.: ";
    cin>>a>>b;
    cout<<"\n Before Swapping: a= "<<a<<"  b= "<<b;
    c=a;
    a=b;
    b=c;
    cout<<"After Swapping: a="<<a<<" b="<<b;
};

