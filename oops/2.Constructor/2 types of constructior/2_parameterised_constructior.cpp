#include<iostream>
using namespace std;

class Complex {
    int a,b;
public: 
    Complex(int x, int y);   // parameterised construction declaration

    void getData(){
        cout<<"the complex no. is: "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex :: Complex(int x, int y){    // parameterised construction as it accept arguments
    a=x;
    b=y;
}

int main() {
    // Implicit calll
    Complex c1(7,8);

    //Explicit call
    Complex c2=Complex(5,6);

    c1.getData();
    c2.getData();
    return 0;
}












