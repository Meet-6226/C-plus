#include<iostream>
using namespace std;
void add(int& a,int& b)
{
    int c=a+b;
    cout<<"Addition is "<<c<<endl;

}
int main()
{
    int num1=10;
    int num2=20;
    add(num1,num2);
};