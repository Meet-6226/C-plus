#include<iostream>
using namespace std;
void grt()
{
    int a,b,c;
    cout<<"Enter 3 nos.: ";
    cin>>a>>b>>c;
    if (a>c)
    {
        if(a>b)
            cout<<a<<" is greatest";
        else
            cout<<b<<" is greatest";
    }
    else
    {
        if(b>c)
            cout<<b<<" is greatest";
        else
            cout<<c<<" is greatest";
    }
    
}
int main()
{
    grt();
};