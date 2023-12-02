#include<iostream>
using namespace std;
int peakIndex(int arr[],int size){
    int s=0;
    int e=size-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}
int main(){
    int arr[8]={1,2,3,4,5,8,9,8};
    int pi=peakIndex(arr,8);
    cout<<"peak index of this mountain array: "<<pi<<endl;
    
    return 0;
}