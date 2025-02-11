#include<iostream>
using namespace std;
void demonstration_pointer()
{
    int var=20;
    int*ptr;
    ptr=&var;

    cout<<"Value at ptr "<<ptr<<endl;
    cout<<"value at var "<<var<<endl;
    cout<<"Value at *ptr "<<*ptr<<endl;
}
int main()
{
    demonstration_pointer();
    return 0;
};