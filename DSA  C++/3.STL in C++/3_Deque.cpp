#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> d;
    d.push_back(1);    
    d.push_front(4);

    d.push_back(6);
    d.push_front(3);


    for(int i: d){
        cout<<i<<" ";  // 3,4,1,6
    }

    d.pop_back();
    cout<<endl;
    for(int i: d){
        cout<<i<<" ";   // 3,4,1
    }
    cout<<endl;

    d.pop_front();
    for(int i: d){
        cout<<i<<" ";   // 4,1
    }
    cout<<endl;

    cout<<"element at first index: "<<d.at(1)<<endl;   //1

    cout<<"front elm: "<<d.front()<<endl;    //4
    cout<<"back elm: "<<d.back()<<endl;      //1

    cout<<"is deque empty: "<<d.empty()<<endl;   //0

    cout<<"size: "<<d.size()<<endl;   //2
    d.erase(d.begin(),d.begin()+1);         // 2 deleted
    cout<<"size: "<<d.size()<<endl;   //1

     for(int i: d){
        cout<<i<<" ";   // 1
    }

    return 0;
}