#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Input elements of the array : ";
        cin>>arr[i];
    }
    
    cout<<"The enetered elements is : ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<", ";
    }
};