#include<iostream>
using namespace std; 

int findLargestSecLargest(int arr[], int size){
    int largest=arr[0];
    int secondLargest=arr[0];
    for(int i=1;  i<size;  i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest<<endl;

    for(int i=1; i<size; i++){
        if(arr[i]>secondLargest && arr[i]!=largest){
            secondLargest=arr[i];
        }
    }
    
    return secondLargest;
}
int main(){
    int arr[4]={333, 341, 56, 32};
    int size=sizeof(arr)/sizeof(arr[0]); 
    int largest_val, second_largest=findLargestSecLargest(arr, size);
    
    cout<<second_largest<<endl;
}