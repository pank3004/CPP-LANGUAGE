#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void getData()
    {
        cout << "a= " << a << " , "
             << "b= " << b << endl;
    }
};

int main()
{
    Complex c1;
    c1.getData();

    Complex c2(5);
    c2.getData();

    Complex c3(4, 5);
    c3.getData();

    return 0;
}