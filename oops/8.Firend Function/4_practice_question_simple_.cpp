// add two number (that belong the differet-defferent classes)

#include<iostream>
using namespace std;

class Y;    // forward declaration of class Y
class X {
    int num1;
public: 
    void setData(int value){
        num1=value;
    }
    friend void add(X ,Y);

};

class Y {
    int num2;
public: 
    void setData(int value){
        num2=value;
    }
    friend void add(X ,Y);
};

void add(X o1, Y o2){          // the function add is the firend of two classoes X and Y 
    cout<<"add of the two number: "<<(o1.num1+o2.num2)<<endl;   
}
int main() {
    X o1;
    Y o2;
    o1.setData(4);
    o2.setData(89);
    add(o1,o2);
    return 0;
}