#include<iostream>
using namespace std;
void countSort(int arr[], int n, int pos){

    // create frequency array of size max+1
    int freq[10]={0};
    for(int i=0; i<n; i++){
        freq[arr[i]/pos%10]++;
    }

    // commulative frequecy array
    for(int i=1; i<10; i++){
        freq[i]+=freq[i-1];
    }
    
    // ans array
    int ans[n];
    for(int i=n-1; i>=0; i--){
        ans[--freq[arr[i]/pos%10]]=arr[i];
    }

    // update original array from ans array 
    for(int i=0; i<n; i++){
        arr[i]=ans[i];
    } 

}
void radixSort(int arr[],int n){
    // find max element
    int Max=INT32_MIN;
    for(int i=0; i<n; i++){
        Max=max(Max, arr[i]);
    }

    for(int pos=1; Max/pos>0; pos*=10){
        countSort(arr,n,pos);
    }
}
int main(){
    int arr[]={170,45,75,90,802,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"this is the original array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
     radixSort(arr, size);
    cout<<"this is the sorted array by count sort: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}