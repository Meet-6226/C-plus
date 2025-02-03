#include<iostream>
#include<string>
using namespace std;
int main()
{
    string greeting="Hello World!";
    cout<<greeting<<endl;

    string name;
    cout<<"Enter ypur name: ";
    cin>>name;
    cout<<name<<endl;
    
    int length=greeting.length();
    cout<<length<<endl;

    string firstName="Hi Meet";
    string lastName="Alshi";
    string fullName=firstName+" "+lastName;
    cout<<fullName<<endl;
    string base="Hello";
    cout<<base<<endl;
    base.append("Hello World!");
    cout<<base<<endl;

    string str1="Apple";
    string str2="Banana";

    if (str1==str2)
    {
        cout<<"String are equal"<<endl;
    }
    else
    {
        cout<<"Strings are not equal";
    }

    int result=str1.compare(str2);
    if (result==0)
    {
        cout<<"Strings are equal"<<endl;
    }
    else if(result<0)
    {
    cout<<"str1 comes before str2";
    }
    else
    {
    cout<<"str1 comes before str2";
    }

    string text="Hello World!";
    cout<<text<<endl;
    string sub=text.substr(0,5);
    cout<<sub<<endl;
};