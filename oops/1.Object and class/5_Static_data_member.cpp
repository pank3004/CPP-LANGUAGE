/*
Static Data Members in C++: 
-->Static data members are class members that are declared using static keywords.
-->When a static data member is created, there is only a single copy of the data member which is 
  shared between all the objects of the class.no matter how many objects are created. 
-->It is initialized before any object of this class is created, even before the main starts.
-->It is visible only within the class, but its lifetime is the entire program.
-->syntex: static data_type data_member_name;
-->if the data members are not static then every object has an individual copy of the data member
   and it is not shared.
*/

/*
Static Methods in C++:
-->A static member function is independent of any object of the class. 
-->A static member function can be called even if no objects of the class exist.
-->A static member function can accessed using object name or also be accessed using the class name through the scope resolution operator.
-->A static member function can only access static data members and static member functions inside or outside of the class.
-->Static member functions have a scope inside the class and cannot access the current object pointer.
-->You can also use a static member function to determine how many objects of the class have been created.
*The reason we need Static member function:
-->Static members are frequently used to store information that is shared by all objects in a class. 
-->For instance, you may keep track of the quantity of newly generated objects of a specific class type using a static data member as a counter. This static data member can be increased each time an object is generated to keep track of the overall number of objects.
*/
#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cout << "Enter the id of the employee: ";
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "this is the id of employee " << id << " and this is the employee number " << count << endl;
    }
    static void getCount(){
        cout<<"the number of employee is: "<<count<<endl;
       // cout<<id;    //error because static member function can only access static data member or static memberr functio
    }
};
int employee ::count;   // bydefault count =0   << we can change by int employee ::count=1000;

int main()
{
    employee pankaj, nitesh, neeshu;
    pankaj.setData();
    pankaj.getData();
   // pankaj.getCount();       // it also be worked
    employee :: getCount();

    nitesh.setData();
    nitesh.getData();
    employee :: getCount();

    neeshu.setData();
    neeshu.getData();
    employee :: getCount();
    return 0;
}