// this is a generalized solution (works even when the range does not start from 1).

#include<iostream>
using namespace std;

int min(int arr[], int size){
    int min=arr[0];
    for(int i=0; i<size; i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}

int main(){

    int arr[]={9, 6, 7, 10};
    int size=sizeof(arr)/sizeof(arr[0]); 

    int min_value=min(arr, size);
    int n=(min_value-1)+(size+1); //  min_value+size bhi likh sakta tha but for more clarity
    int expected_sum=n*(n+1)/2;      // sum without missing
    int sum=(min_value-1)*min_value/2;    // 1 to min_value-1; // sum with missing  // if range start from 1 then it will be 0

    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    cout<<"missing number="<<expected_sum-sum<<endl;

    return 0;
}