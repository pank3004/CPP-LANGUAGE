/*
Hierarchical Inheritance: More than one subclass is inherited from a single base class in this type of
inheritance i.e. a single base class is used to create multiple derived classes.
 
                class A
             (Base class)
              .         .
           .               .
        class A         class B
      (derived 1)     (derived 2)     
           
*/


#include<iostream>
using namespace std;
class parent{
public:
    parent(){
        cout<<"executed parent class\n";
    }
};

class child1: public parent{
public:
    child1(){
        cout<<"executed child1 class\n";
    }
    
};
class child2: public parent{
public:
    child2(){
        cout<<"executed child2 class\n";
    }
    
};
int main()
{
    // child1 c;
    // child2 c;     // they give error because it should be different object name of the different classes
    child1 c1;
    child2 c2;
    return 0;
}