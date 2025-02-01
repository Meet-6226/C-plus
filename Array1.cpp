#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        cout<<"Input elements of the array : ";
        cin>>arr[i];
    }

    arr[4]=200;
    cout<<"Modified array: "<<endl;

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
};