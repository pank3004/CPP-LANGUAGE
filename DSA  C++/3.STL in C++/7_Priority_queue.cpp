#include <iostream>
#include <queue>
using namespace std;

int main()
{

    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int,vector<int>,greater<int>> mini;

    cout<<"for maxi: "<<endl;
    maxi.push(2);
    maxi.push(5);
    maxi.push(0);
    maxi.push(4);

    cout<<"max element: "<<maxi.top()<<endl;
    cout << "size of priority queue: " << maxi.size() << endl;
    int n=maxi.size();

    for(int i=0; i<n; i++ ){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    cout << "is queue empty: " << maxi.empty() << endl<<endl;


    cout<<"for mini: "<<endl;

    mini.push(2);
    mini.push(5);
    mini.push(0);
    mini.push(4);

    cout<<"mini element: "<<mini.top()<<endl;
    cout << "size of priority queue: " << mini.size() << endl;
    int N=mini.size();

    for(int i=0; i<N; i++ ){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout << "is priority queue empty: " << mini.empty() << endl;

    return 0;
}