#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;
    cout << "capacity: " << v.capacity() << endl; // 0

    v.push_back(2);
    cout << "capacity: " << v.capacity() << endl; // 1

    v.push_back(5);
    cout << "capacity: " << v.capacity() << endl; // 2

    v.push_back(4);
    cout << "capacity: " << v.capacity() << endl; // 4

    v.push_back(8);
    cout << "capacity: " << v.capacity() << endl; // 4

    v.push_back(10);
    cout << "capacity: " << v.capacity() << endl; // 8  when the size of vector full and after push elm then cteate new vector with double size of current vector and copy all elm of the current elem. in the new vector

    cout << "elm at second index: " << v.at(2) << endl; //4
    cout << "front=" << v.front() << endl; //2
    cout << "back=" << v.back() << endl; //10

    cout << "befor pop: " << endl;

    cout << "size : " << v.size() << endl;        /// 5
    cout << "capacity: " << v.capacity() << endl; // 8
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    v.pop_back();

    cout << "after pop:" << endl;
    cout << "size: " << v.size() << endl;         // 4
    cout << "capacity: " << v.capacity() << endl; // 8
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";

    cout << "a ki kahani--------->>>>" << endl;

    vector<int> a(5, 1); // size 5 and initialze all the elemtnt with 1
    cout << "size=" << a.size() << " ,"
         << "capacity: " << a.capacity() << endl;

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";

    cout << "last ki kahani--------->>>>" << endl;

    vector<int> last(a); // copy all the elements from a to last vector with same size and capacity
    cout << "size=" << last.size() << " ,"
         << "capacity: " << last.capacity() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}