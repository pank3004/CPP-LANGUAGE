/*
Operator Overloading:-
Operator overloading gives special meaning and functioning to different operators. For ex: the ‘+’ operator can
be used to add two complex numbers, we will define the function of the operator in such a way that our desired
operation is achieved.
*/

#include<iostream>
using namespace std;
class Complex{
public: 
    int real;
    int imag;

    Complex(int x, int y){
        real=x;
        imag=y;
    }
    Complex operator+(Complex &c){
        Complex ans(0,0);
        ans.real=real+c.real;
        ans.imag=imag+c.imag;
        return ans;
    }
};
int main()
{
    Complex c1(2,3);
    Complex c2(5,6);
    Complex c3=c1+c2; // + operator work on c1 and c2 passing as a args //Complex c3(c1+c2);
    cout<<c3.real<<" i"<<c3.imag<<endl;

    return 0;
}