#include<iostream>
using namespace std;
int main()
{
    int num[]={1,2,3,4,5};

    cout<<"First Element is: "<<num[0]<<endl;
    cout<<"Last Element is: "<<num[4]<<endl;

    num[2]=10;
    cout<<"Modified array: "<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<num[i]<<endl;
    }
};