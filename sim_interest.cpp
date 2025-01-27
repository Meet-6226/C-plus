#include<iostream>
using namespace std;
int main()
{
    int p;
    float roi;
    int t;
    float amt;
    cout<<"Enter the principle amount : "<<endl;
    cin>>p;
    cout<<"Enter the Rate of Interest : "<<endl;
    cin>>roi;
    cout<<"Enter the no of years : "<<endl;
    cin>>t;

    amt=(p*roi*t)/100;
    cout<<"The amount you will get after "<<t<<" years is "<<amt;
};