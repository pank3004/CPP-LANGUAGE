/*
Constructors in C++: 

->A constructor is a special member function with the same name as the class.
->The constructor doesn’t have a return type.
->Constructors are used to initialize the objects of its class. 
->Constructors are automatically invoked whenever an object is created.

Important Characteristics of Constructors in C++: 

->A constructor should be declared in the public section of the class
->They are automatically invoked whenever the object is created
->They cannot return values and do not have return types
->It can have default arguments
->We cannot refer to their address

*/


#include<iostream>
using namespace std;
class Rectangle{
public:
    int l;
    int b;

    Rectangle(){        // default constructor--no ars pass
        l=0;
        b=0;
    }

    Rectangle(int x, int y){    // parameterised constructor--args pass
        l=x;
        b=y;
    }

    Rectangle(Rectangle &ref){   //copy constructor--initialize an obj by another existing obj
        l=ref.l;
        b=ref.b;
    }

};
int main()
{
    Rectangle r1;
    cout<<r1.l<<" "<<r1.b<<endl;

    Rectangle r2(4,6);
    cout<<r2.l<<" "<<r2.b<<endl;

    Rectangle r3(r2);   //Rectangle r3=r2;
    cout<<r3.l<<" "<<r3.b<<endl;

    return 0;

}