/*
Single Inheritance:  When a class inherits from a single class i.e. the derived class is inherited by a single base
class.
        class A ------------> class B
      (Base class)        (derived class)
*/


#include<iostream>
using namespace std;
class parent{
    public:
    parent(){
        cout<<"executed parent class\n";
    }
};
class child: public parent{
    public:
    child(){
        cout<<"executed child class\n";
    }
    
};
int main()
{
    parent p;
    child c;
}