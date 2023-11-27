#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Before swaping: ";

    cout<<"a="<<a<<","<<"b="<<b;
    c=a;
    a=b;
    b=c;
    cout<<endl<<"After swaping: ";
    cout<<"a="<<a<<","<<"b="<<b;

    return 0;
}