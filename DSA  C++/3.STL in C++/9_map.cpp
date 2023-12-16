#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "pankaj";
    m[5] = "kumawat";
    m[11] = "sikar";
    m[12] = "rajasthan";

   

    for (auto i : m)
    {
        cout << i.first << endl;
    } 
    cout<<endl;

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout<<endl;

    cout << "is 11 present in the map: " << m.count(11)<<endl; // 1
    cout<<endl;
    m.insert({2, "rawan"});

    m.erase(11);

    cout << "is 11 present in the map: " << m.count(11)<<endl; // 1
    cout<<endl;

     for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout<<endl;

    auto it=m.find(5);  //it is an iterator, and *it is used to access the value at the memory location pointed to by the iterator it
    for(auto i=it ;i!=m.end(); i++){
        cout<<(*i).first<<endl;              //5 12 100
    }

    return 0;
}