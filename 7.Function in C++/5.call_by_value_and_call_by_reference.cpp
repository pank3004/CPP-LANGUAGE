#include<iostream>
using namespace std;

// this function defination is for call by value
void swap(int x, int y)  // the value of a and b is copied in x and y
{
    int z;
    z=x;
    x=y;
    y=z;
}

// this function defination is for call by reference
void swap_ref(int *x, int *y)  // the address of variable a and b stored in the pointer variable x and y
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}

int main()
{
    int a=90,b=67;
    cout<<"In call by value: "<<endl;
    cout<<"Befor swaping: "<<"a="<<a<<","<<"b="<<b<<endl;
    swap(a,b);       // the value of variable a and b are passed
    cout<<"After swaping: "<<"a="<<a<<","<<"b="<<b<<endl;

    cout<<"In call by reference: "<<endl;
    cout<<"Befor swaping: "<<"a="<<a<<","<<"b="<<b<<endl;
    swap_ref(&a,&b);        // the address of the variables a and b are passed 
    cout<<"After swaping: "<<"a="<<a<<","<<"b="<<b<<endl;

    return 0;
}