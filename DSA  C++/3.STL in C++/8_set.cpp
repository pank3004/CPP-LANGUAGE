#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(3);
    s.insert(8);
    s.insert(3);
    s.insert(3);
    s.insert(8);
    s.insert(3);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(0);
    s.insert(5);
    s.insert(3);
    s.insert(5);
    s.insert(3);

    for (auto i : s)   //The auto keyword is used to automatically deduce the type of the variable 
    {
        cout << i << " "; // 0 2 3 5 8  sorting order and ignore duplicate elemtntd
    }

    cout << endl;
    s.erase(s.begin());

    for (auto i : s)
    {
        cout << i << " ";         // 2 3 5 8
    }
    cout<<endl;
    set<int>:: iterator it=s.begin();   // set<int> class and iterator is memberr of class    ,,*it dereferences the iterator,   
    it++;
    cout<<"dafadff: "<<*it<<endl;
    s.erase(it);

    for (auto i : s)
    {
        cout << i << " ";         // 2 5 8
    }
    cout<<endl;
    cout<<"is present or not in the set: "<<s.count(5);  // 1
    cout<<endl;

    set<int> :: iterator itr=s.find(5);     // to find the index of the 5
    for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<" ";                             // 5 8
    }
    cout<<endl;
    
    return 0;
}