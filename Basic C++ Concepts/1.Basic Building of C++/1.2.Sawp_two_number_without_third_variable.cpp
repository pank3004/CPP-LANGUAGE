#include<iostream>
using namespace std;
int main()
{
    int a,b;
    
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    cout<<"Before swaping: ";
    cout<<"a="<<a<<","<<"b="<<b;     // a=3,b=2

    a=a+b;      // a=3+2=>5
    b=a-b;      // b=5-2=>3
    a=a-b;      // a=5-3=>2

    cout<<endl<<"After swaping: ";
    cout<<"a="<<a<<","<<"b="<<b;      //a=2,b=3

    return 0;
}