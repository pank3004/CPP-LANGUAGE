#include <iostream>
using namespace std;

class Y;
class X
{
    int data1;
    friend void exchange(X &, Y &);

public:
    void setData(int value)
    {
        data1 = value;
    }
    void getData()
    {
        cout << "the value of data1 is: " << data1 << endl;
    }
};

class Y
{
    int data2;
    friend void exchange(X &, Y &);

public:
    void setData(int value)
    {
        data2 = value;
    }
    void getData()
    {
        cout << "the value of data2 is: " << data2 << endl;
    }
};

void exchange(X &oX, Y &oY)
{
    int temp = oX.data1;
    oX.data1 = oY.data2;
    oY.data2 = temp;
}

int main()
{
    X oX;
    Y oY;
    oX.setData(34);
    oY.setData(76);

    cout << "Before exchange the values of data1 and data2:";
    oX.getData();
    oY.getData();

    exchange(oX, oY);
    cout << "After exchange the values of data1 and data2:";
    oX.getData();
    oY.getData();

    return 0;
}