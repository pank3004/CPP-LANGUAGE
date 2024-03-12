#include<iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5,65,6};
    int size1=sizeof(arr)/sizeof(arr[0]);
    cout<<size1<<endl;
    return 0;
}