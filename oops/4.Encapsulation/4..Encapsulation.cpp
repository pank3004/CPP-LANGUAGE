/*Encapsulation: 

Encapsulation in C++ is basically referred to as binding of methods and variables together that are present in a
single class. The data stored in the variables of the class is not accessed directly, instead it is done with the
help of methods present in the class.

Consider a practical illustration of encapsulation: at a company, there are various divisions, such as the
accounts division, the administrative division, the tech division, etc. The administrative department manages all
admin work and maintains records of all admin data. In a similar vein, the tech section manages all actions
linked to tech and keeps track of all tech stacks. Now a scenario could occur when an administrative official
requires all the tech information for a specific month for some reason. He is not permitted to view the tech
section's data directly in this instance. To request the specific information, he must first speak with another
officer in the tech department. This is what encapsulation is.

Encapsulation also leads to data abstraction or hiding which basically restricts the user from accessing the
data members of the object. In the above example, the data of any of the sections like administrative, tech or
accounts are hidden from any other section. This is done with the help of access specifiers which we will be
studying in a while.
*/

#include<iostream>
using namespace std;
class ABC{
    int x;           //data member(variable), modal,,we can't access direclty

    public:

    void set(int n){     //set and get is the member function(methods)
        x=n;
    }
    int get(){
        return x;
    }

};
int main()
{
    ABC obj1;
    obj1.set(3);
    cout<<obj1.get()<<endl;

    return 0;

}