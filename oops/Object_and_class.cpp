#include<iostream>
using namespace std;
class Fruit{               // Fruit is the class that is the user defined data type
public:                   // by default this is private to do first public
    string name;         // these are the properties of class Fruit
    string colour;
};

int main()
{
    Fruit apple;                 // apple (object) is the variable of the Fruit datatype
    apple.name="Apple";
    apple.colour="Red";
    cout<<apple.name<<"--"<<apple.colour<<endl;
    
    // this is the another way to defined object

    Fruit *mango=new Fruit();          // mango is the object pointer
    mango->name="Mango";
    mango->colour="Yellow";
    cout<<mango->name<<"--"<<mango->colour<<endl;

    return 0;
}