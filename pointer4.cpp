#include<iostream>
using namespace std;
int main()
{
    int var=5;
    int *ptr_var=&var;
    
    cout<<"var = "<<var<<endl;
    cout<<"*pointer_var = "<<*ptr_var<<endl;

    var=7;
    cout<<"var = "<<var<<endl;
    cout<<"*pointer_var = "<<*ptr_var<<endl;
};