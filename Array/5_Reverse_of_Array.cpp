#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
     
}
void reverse(int arr[], int n){
    for(int i=0; i<n/2; i++){
        swap(arr[i], arr[n-i-1]);
    }

}
int main() {
    int array[10]={32,5,-23,5,6,3,6,2,4,78};
    printArray(array, 10);
    reverse(array, 10);
    printArray(array, 10);

    return 0;
}