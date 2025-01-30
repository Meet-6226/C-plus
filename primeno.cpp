#include<iostream>
using namespace std;
int prime(int x)
{
   for(int i=2;i<=x/2;i++)
   {
        if(x%i==0)
        return false;

   }
   return true;
}
int main()
{
    int num;
    cout<<"Enter a no. ";
    cin>>num;
    
    if(prime(num)) 
    {
        cout << num << " is a prime number." << endl;
    } 
    else 
    {
        cout << num << " is not a prime number." << endl;
    }
};