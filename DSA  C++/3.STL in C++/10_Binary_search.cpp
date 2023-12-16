#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(11);
    v.push_back(24);
    v.push_back(37);

    for (auto i : v)
    {
        cout << i << " ";      //3 5 11 24 37
    }
    cout << endl;

    cout << "is presernt 11 in vector: " << binary_search(v.begin(), v.end(), 11) << endl; // 1

    cout << "Index of lower bound of 11: " << lower_bound(v.begin(), v.end(), 11) - v.begin() << endl;       //2
    cout << "Index of upper bound of 24: " << upper_bound(v.begin(), v.end(), 24) - v.begin() << endl;      //4

    int a=34;
    int b=67;
    cout<<"max: "<<max(a,b)<<endl;
    cout<<"min: "<<min(a,b)<<endl;

    cout<<"a="<<a<<", "<<"b="<<b<<endl;
    swap(a,b);
    cout<<"a="<<a<<", "<<"b="<<b<<endl;

    string str="pankaj";
    reverse(str.begin(), str.end());
    cout<<"string: "<<str<<endl;


    
    rotate(v.begin(), v.begin()+1, v.end()-1);    
    for(int i: v){
        cout<<i<<" ";// 5 11 24 3 37
    }
    cout<<endl;

    
  
    sort(v.begin(), v.end());   // based on intro sort,,combination(quick, insertion , heap sort)
    for(int i: v){
        cout<<i<<" ";
    }

    return 0;
}