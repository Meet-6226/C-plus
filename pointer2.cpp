#include<iostream>
using namespace std;
int main()
{
    int var=5;
    int* point_var=&var;

    cout<<"var = "<<var<<endl;
    cout<<"Address of var (&var)"<<&var<<endl;
    cout<<"End point variable: "<<point_var<<endl;
    cout<<"content address to the post variable: "<<*point_var<<endl;
};