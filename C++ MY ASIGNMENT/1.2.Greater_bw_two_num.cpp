// program for find out the greater b/w two number
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    if(a==b)
    {
        cout<<"a is equal to b"<<endl;
    }
    else if(a>b)
    {
        cout<<"a is greater than b"<<endl;
    }
    else
    {
        cout<<"b is greater than a"<<endl;
    }

    return 0;
}