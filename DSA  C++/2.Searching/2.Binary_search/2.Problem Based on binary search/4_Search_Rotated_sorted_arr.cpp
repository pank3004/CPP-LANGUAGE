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

int binarySearch(int arr[] ,int s, int e,int key){
    int start=s;
    int end=e;
  
    while(start<=end){ 
        int mid = start + (end - start) / 2;  
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }      
    }
    return -1;
}
int findPosition(int arr[], int size, int key){
    int s=0; 
    int e=size-1;
    int pivot=findPivot(arr,size);

    if(key>=arr[pivot] && key<=arr[size-1]){
        return binarySearch(arr, pivot,size-1,key);
    }
    else{
        return binarySearch(arr,0,pivot-1,key);
    }
    
}
int main() {
    int arr[5]={7,9,1,2,3};

    int ans=findPosition(arr,5,9);
    cout<<"The index of the key value is: "<<ans<<endl;
    return 0;
}