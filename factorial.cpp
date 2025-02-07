#include<iostream>
using namespace std;
void fact()
{
    int num,fact=1;
    cout<<"Enter  a no. ";
    cin>>num;

    for(int i=num;i>0;i--)
        fact *=i;
    cout<<"Factorial of "<<num<<" is "<<fact;

}
int main()
{
    fact();
};