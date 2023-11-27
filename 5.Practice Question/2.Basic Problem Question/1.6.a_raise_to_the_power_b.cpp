#include<iostream>
using namespace std;
int main()
{
    int a,b,i,pow=1;
    cout<<"Enter the value of a and b:  ";
    cin>>a>>b;
    for(i=1; i<=b; i++)
    {
        pow=pow*a;
    }
    cout<<"a raise to the power b is : "<<pow<<endl;
    return 0;
}