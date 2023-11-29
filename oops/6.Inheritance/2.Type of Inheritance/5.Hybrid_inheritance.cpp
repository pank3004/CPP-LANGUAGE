/* 
Hybrid Inheritance: It is a combination of more than one type of inheritance. For example:
Hierarchical inheritance and Multiple Inheritance are combined together and this is called hybrid inheritance.
*/

#include <iostream>
using namespace std;
 
// base class
class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};
 
// base class
class Fare {
public:
    Fare() { cout << "Fare of Vehicle\n"; }
};
 
// first sub class
class Car : public Vehicle {      //multilevel inheritance
};
 
// second sub class
class Bus : public Vehicle, public Fare {    //multiple inheritance
};
int main()
{
    return 0;
}