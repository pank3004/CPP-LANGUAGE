#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot=arr[e];
    int i=s-1;       // for inserting element that is less than pivot
    int j=s;         // for finding element that is less than pivot
    for(;j<e ;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    // correct positi0n of the pivot is i+1
    swap(arr[i+1],arr[e]);
    return i+1;
}
void quickSort(int arr[],int s,int e){
    
    if(s>=e){
        return;
    }
        int pi=partition(arr,s,e);
        quickSort(arr,s,pi-1);
        quickSort(arr,pi+1,e);
    
    
}
int main(){
    int arr[]={10,45,7,78,1,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,size-1);
    cout<<"this is the sorted array by quick sort"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}