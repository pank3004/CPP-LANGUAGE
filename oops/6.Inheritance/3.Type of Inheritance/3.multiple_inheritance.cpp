/*
When a base class is itself derived from some other class it is known as multiple
inheritance i.e. the parent class is itself a child class of some other parent class.
        class A         class B
      (Base 2)          (Base 1)     
             .           .
               'class C'
            (derived class)
*/


#include<iostream>
using namespace std;
class parent1{
public:
    parent1(){
        cout<<"executed parent1 class\n";
    }
};
class parent2{
public:
    parent2(){
        cout<<"executed parent2 class\n";
    }
};
class child: public parent1, public parent2{
public:
    child(){
        cout<<"executed child class\n";
    }
    
};
int main()
{
    child c;
    return 0;
}