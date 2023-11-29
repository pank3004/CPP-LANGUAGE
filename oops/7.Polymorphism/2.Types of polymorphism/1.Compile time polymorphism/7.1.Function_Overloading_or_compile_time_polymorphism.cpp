/*
Compile time polymorphism:-
Compile-time polymorphism, also known as static polymorphism, is a type of polymorphism that is resolved
during the compilation of a program. It is achieved through function overloading.It basically has a number of
functions with the same name but different number or type of arguments.

Function overloading:-
Function overloading is a type of compile-time polymorphism in which multiple methods in a class have the
same name but different parameter lists. When a function is called, the C++ compiler determines which version
of the method to execute based on the number and type of the arguments passed to the method.
*/

#include<iostream>
using namespace std;
class Sum{
public: 
    void sum(int a, int b)          // member function
    {
        cout<<a+b<<endl;
    }
    void sum(int a, int b, int c)
    {
        cout<<a+b+c<<endl;
    }
    void sum(float a, float b)
    {
        cout<<a+b<<endl;
    }
    void sum(float a, float b, float c)
    {
        cout<<a+b+c<<endl;
    }
};
int main()
{
    Sum s;
    s.sum(4,5);
    s.sum(4,5,6);
 // s.sum(3.4,8.9)        /// it give error
    s.sum((float)4.5,(float)5.7);
    s.sum((float)4.5,(float)5.7,(float)8.3);


    return 0;
    
}