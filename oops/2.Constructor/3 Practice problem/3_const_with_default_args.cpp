#include <iostream>
using namespace std;

class Complex
{
    int a, b, c;

public:
    Complex(int x, int y, int z=1000)     // default args give from right to left
    {
        a = x;
        b = y;
        c = z;
    }
    void getData()
    {
        cout << "a= " << a << " , "
             << "b= " << b << ","
             << "c= " << c << endl;
    }
};

int main()
{

    Complex c1(4, 5);
    c1.getData();

    return 0;
}