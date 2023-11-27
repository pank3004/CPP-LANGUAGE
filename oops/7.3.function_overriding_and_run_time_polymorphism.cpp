/*
Run-time Polymorphism:-
Run-time polymorphism, also known as dynamic polymorphism, is a type of polymorphism that is resolved at
runtime. It is achieved through function overriding in C++, which is the ability of a subclass to override the
methods of its superclass.
Function Overriding occurs when a derived class has a definition for one of the member functions of the base
class.
*/
#include<iostream>
using namespace std;
class Parent{
public:
    virtual void print(){
        cout<<"Parent class print fn\n";
    } 
    void show(){
        cout<<"Parent class show fn\n";
    } 
};
class Child: public Parent{
public:
    void print(){
        cout<<"Child class print fn\n";
    }  
    void show(){
        cout<<"child class show fn\n";
    } 
};

int main()
{
    Child c;
    c.show();      // child class show fn
    c.Parent::show();  // parent class show fn
    Parent *p;
    p=&c;
    p->show();   // Parent class show fn
    p->print();  // chid class print fn (fn overriding)

    return 0;
}