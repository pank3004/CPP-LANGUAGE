#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(4);

    l.push_back(6);
    l.push_front(3);

    for (int i : l)
    {
        cout << i << " "; // 3,4,1,6
    }

    l.pop_back();
    cout << endl;
    for (int i : l)
    {
        cout << i << " "; // 3,4,1
    }
    cout << endl;

    l.pop_front();
    for (int i : l)
    {
        cout << i << " "; // 4,1
    }
    cout << endl;

    // cout<<"element at first index: "<<l.at(1)<<endl;   //error

    cout << "front elm: " << l.front() << endl; // 4
    cout << "back elm: " << l.back() << endl;   // 1

    cout << "is list empty: " << l.empty() << endl; // 0

    cout << "size: " << l.size() << endl; // 2

    // l.erase(l.begin(),l.begin()+1);         // error

    l.erase(l.begin());

    cout << "size: " << l.size() << endl; // 1

    for (int i : l)
    {
        cout << i << " "; // 1
    }

    cout << endl;

    list<int> L(l);
    for (int i : L)
    {
        cout << i << " "; // 1
    }

    cout << endl;

    list<int> L1(5, 100);
    for (int i : L1)
    {
        cout << i << " "; // 100,100,100,100,100
    }

    return 0;
}