/*
Friend Function:
Friend function is a non-member function which is listed in the class and is used to access the private
members of the class to perform operations using these private members of the class. The friend function
cannot access the private members directly, instead it uses a specific syntax i.e. object name and the dot
operator.

Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/
#include<iostream>
using namespace std;

class complex {
    int a;
    int b;
public: 
    void setData(int x, int y){
        a=x;
        b=y;
    }
    void getData(){
        cout<<"complex no. is: "<<a<<" + "<<b<<"i"<<endl;
    }
    friend complex sumComplex(complex c1, complex c2);

};

complex sumComplex(complex c1, complex c2){
    complex c3;
    c3.setData((c1.a+c2.a), (c1.b+c2.b));
    return c3;
}

int main() {
    complex c1, c2,c3;
    c1.setData(2,4);
    c1.getData();

    c2.setData(3,5);
    c2.getData();

    c3=sumComplex(c1,c2);
    c3.getData();
    return 0;
}

// eg. find out the add of two private variable value with the help of an external fun.

// #include<iostream>
// using namespace std;
// class xyz{
// private:
//     int a;
//     int b;
// public:
//     xyz(int p, int q){
//         a=p;
//         b=q;
//     }
//     friend void add(xyz ob);          // only declaration of firend function
// };
// void add(xyz ob){                // if we only ob without &  then will be it work
//     cout<<"a="<<ob.a<<","<<"b="<<ob.b<<endl;
//     cout<<"sum of a and b is: "<<ob.a+ob.b<<endl;
// }
// int main()
// {
//     xyz obj(34,45);
//     add(obj);    //  it call without object and . operator
    
//     return 0;
// }