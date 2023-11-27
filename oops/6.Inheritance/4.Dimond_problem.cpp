/*
Diamond Problem in inheritance: 
The "diamond problem" is a term used to describe a situation that can occur in a class hierarchy when a
subclass extends multiple superclasses and those superclasses have a common ancestor. This can lead to
ambiguity because the subclass has multiple inherited methods with the same name, which can cause the
subclass to behave unexpectedly.
            class parent
              (ancestor)
              .         .
           .               .
    class child1         class child2 
           .               .     
             .           .
               grandChild
            (derived class)
*/


#include<iostream>
using namespace std;
class parent{
public:
    parent(){
        cout<<"executed parent class\n";
    }
};
class child1:public parent{
public:
    child1(){
        cout<<"executed child1 class\n";
    }
};
class child2:public parent{
public:
    child2(){
        cout<<"executed child2 class\n";
    }
};
class grandChild:public child1,public child2{
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