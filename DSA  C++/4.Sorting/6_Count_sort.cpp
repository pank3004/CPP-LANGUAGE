#include<iostream>
using namespace std;

void countSort(int arr[], int n){
    // find max element
    int Max=INT32_MIN;
    for(int i=0; i<n; i++){
        Max=max(Max, arr[i]);
    }

    // create frequency array of size max+1
    int freq[Max+1]={0};
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    // commulative frequecy array
    for(int i=1; i<=Max; i++){
        freq[i]+=freq[i-1];
    }
    
    // ans array
    int ans[n];
    for(int i=n-1; i>=0; i--){
        ans[--freq[arr[i]]]=arr[i];
    }

    // update original array from ans array 
    for(int i=0; i<n; i++){
        arr[i]=ans[i];
    }      
}
int main(){
    int arr[]={75,72,13,2,1,6,4,9,9,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"this is the original array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    countSort(arr, size);
    cout<<"this is the sorted array by count sort: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
