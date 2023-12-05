#include<iostream>
using namespace std;

int main() {
    cout<<"paafjfdfdfdddddddddddddddddddddddddddd";
    return 0;
}

// #include <iostream>
// using namespace std;

// class Y;
// class X
// {
//     int data1;
//     friend void exchange(X &, Y &);

// public:
//     void setData(int value)
//     {
//         data1 = value;
//     }
//     void getData()
//     {
//         cout << "the value of data1 is: " << data1 << endl;
//     }
// };

// class Y
// {
//     int data2;
//     friend void exchange(X &, Y &);

// public:
//     void setData(int value)
//     {
//         data2 = value;
//     }
//     void getData()
//     {
//         cout << "the value of data2 is: " << data2 << endl;
//     }
// };

// void exchange(X &oX, Y &oY)
// {
//     int temp = oX.data1;
//     oX.data1 = oY.data2;
//     oY.data2 = temp;
// }

// int main()
// {
//     X oX;
//     Y oY;
//     oX.setData(34);
//     oY.setData(76);

//     cout << "Before exchange the values of data1 and data2:";
//     oX.getData();
//     oY.getData();

//     exchange(oX, oY);
    
//     cout << "After exchange the values of data1 and data2:";
//     oX.getData();
//     oY.getData();

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Complex;
// class Calculator{
// public: 
//     int sumRealComplex(Complex o1, Complex o2);
//     int sumCompComplex(Complex o1, Complex o2);

// };
// class Complex {
//     int a;
//     int b;
//     friend int Calculator :: sumRealComplex(Complex o1, Complex o2);
//     friend int Calculator :: sumCompComplex(Complex o1, Complex o2);

// public: 
//     void setData(int x, int y){
//         a=x;
//         b=y;
//     }
//     void getData(){
//         cout<<"this is the complex no : "<<a<<" + "<<b<<"i"<<endl;
//     }
// };

// int Calculator:: sumRealComplex(Complex o1, Complex o2){
//     return (o1.a + o2.a);
// }
// int Calculator:: sumCompComplex(Complex o1, Complex o2){
//     return (o1.b + o2.b);
// }

// int main() {
//     Complex c1, c2;
//     c1.setData(3,5);
//     c1.getData();

//     c2.setData(4,5);
//     c2.getData();
//     Calculator cal;
//     int sumReal=cal.sumRealComplex(c1,c2);
//     cout<<"this sum of the real parts of the complex numbers: "<<sumReal<<endl;
//     int sumComp=cal.sumCompComplex(c1,c2);
//     cout<<"this sum of the complex parts of the complex numbers: "<<sumComp<<endl;

//     return 0;
// }