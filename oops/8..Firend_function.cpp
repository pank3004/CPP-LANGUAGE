/*
Friend Function:
Friend function is a non-member function which is listed in the class and is used to access the private
members of the class to perform operations using these private members of the class. The friend function
cannot access the private members directly, instead it uses a specific syntax i.e. object name and the dot
operator.
*/

// eg. find out the add of two private variable value with the help of an external fun.

#include<iostream>
using namespace std;
class xyz{
private:
    int a;
    int b;
public:
    xyz(int p, int q){
        a=p;
        b=q;
    }
    friend void add(xyz &ob);          // only declaration of firend function
};
void add(xyz &ob){                // if we only ob without &  then will be it work
    cout<<"a="<<ob.a<<","<<"b="<<ob.b<<endl;
    cout<<"sum of a and b is: "<<ob.a+ob.b<<endl;
}
int main()
{
    xyz obj(34,45);
    add(obj);    //  it call without object and . operator
    
    return 0;
}