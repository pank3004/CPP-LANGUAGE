#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setData(void);
    void getData(void);
};
void shop ::setData(void)
{
    cout << "Enter itemId: ";
    cin >> itemId[counter];
    cout << "Enter Price: ";
    cin >> itemPrice[counter];
    counter++;
}
void shop ::getData(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "this is the price of item id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.setData();
    dukaan.setData();
    dukaan.setData();

    dukaan.getData();
    return 0;
}
