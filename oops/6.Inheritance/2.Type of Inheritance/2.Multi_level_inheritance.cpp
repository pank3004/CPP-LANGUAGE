/*
When a base class is itself derived from some other class it is known as multilevel
inheritance i.e. the parent class is itself a child class of some other parent class.
        class A -----> class B------>class C
      (Base 2)         (Base 1)     (derived class)
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
class grandChild: public child{
public:
    grandChild(){
        cout<<"executed grandChild class\n";
    }
    
};
int main()
{
    grandChild gc;
    return 0;
}