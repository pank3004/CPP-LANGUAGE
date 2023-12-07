#include<iostream>
using namespace std;

class Complex {
    int a,b;
public: 
    Complex(void);

    void getData(){
        cout<<"the complex no. is: "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex :: Complex(){    // default construction definitation as accept no arguments
    a=0;
    b=0;
}

int main() {
    Complex c;
    c.getData();
    return 0;
}












