#include<iostream>
#include<array>
using namespace std;

int main() {
    int ar[5]={6,7,89,90,4};
   // cout<<ar.at(2)<<endl;         //error
   //cout<<ar.empty()<<endl;        //error

    array<int,4> arr={2,3,5,6};
    int size=arr.size();
    cout<<"size of array: "<<size<<endl;
    for(int i=0;i<4; i++){
        cout<<arr[i]<<endl;
    }
    cout<<"element at second index: "<<arr.at(2)<<endl;
    cout<<"array empty or not: "<<arr.empty()<<endl;
    cout<<"first element of the array: "<<arr.front()<<endl;
    cout<<"last element of the array: "<<arr.back()<<endl;
    


    return 0;
}