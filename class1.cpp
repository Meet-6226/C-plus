#include<iostream>
using namespace std;

class Person
{
    public:
    string name;
    int age;

    void intro()
    {
        cout<<"Hi, my name is "<<name<<"and I am "<<age<<" years old."<<endl;
    }
};
int main()
{
    Person person1;
    person1.name="Meet";
    person1.age=18;

    person1.intro();
    return 0;
}