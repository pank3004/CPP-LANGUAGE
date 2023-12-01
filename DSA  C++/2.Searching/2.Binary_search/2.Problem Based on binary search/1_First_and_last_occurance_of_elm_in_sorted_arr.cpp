#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){  
    int s=0;
    int e=size-1;
    while(s<=e){
        int mid=s+(e-s)/2;

        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }  
    return -1;                

}
int main(){
    int n,key,arr[100];
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of array in sort order: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the key value: ";
    cin>>key;
     
    int index=binarySearch(arr,n,key);
    cout<<index<<endl;
    return 0;
}