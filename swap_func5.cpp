#include<iostream>
using namespace std;
void swap(int x,int y)
{
    int t=x;
    x=y;
    y=t;
    cout<<"After Swapping :\n x = "<<x<<endl<<"y = "<<y<<endl;
}
int main()
{
    int x=1,y=2;
    cout<<"Before Swapping:\n x = "<<x<<endl<<"y ="<<y<<endl;

    swap(x,y);
    return 0;
};