#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int marks,rno;

        void setData()
        {
            cout<<"Enter the name of the student ";
            cin>>name;
            cout<<"\nEnter the Roll no. of the student ";
            cin>>rno;
            cout<<"\nEnter the marks of the student ";
            cin>>marks;
        }

        void printData()
        {
            cout<<"\nThe student name "<<name<<" , Roll no. "<<rno<<" has got "<<marks<<endl;
        }
};

int main()
{
    Student obj;
    obj.setData();
    obj.printData();

    return 0;
}