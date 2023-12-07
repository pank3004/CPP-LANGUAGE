#include<iostream>
using namespace std;
int findPivot(int arr[], int size){
    int s=0;
    int e=size-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}

int main() {
    int arr[6]={7,9,10,33,3,4};     
    int ans=findPivot(arr,6);
    cout<<"the index of the pivote elelment is : "<<ans<<endl;
    return 0;
}