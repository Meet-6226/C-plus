#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[70]="Welcome to C++ Program";

    int length= strlen(str1);
    cout<<length<<endl;

    char wel[10];
    strncpy(wel,str1,7);
    cout<<wel<<endl;

    char str2[50]=" BTech";
    strcat(str1,str2);
    cout<<str1<<endl;
};