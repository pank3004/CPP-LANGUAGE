#include<iostream>
using namespace std;
void printArray(int ar[], int n){
    for(int i=0;i<n; i++){
        cout<<ar[i]<<" ";
    }
    cout<<"\n";
}
void update(int ar[], int n){
    ar[1]=5000;
}
int main(){
    int arr[5]={5,6,8,9,34};
    printArray(arr,5);
    update(arr,5);
    printArray(arr,5);                                             
    
}