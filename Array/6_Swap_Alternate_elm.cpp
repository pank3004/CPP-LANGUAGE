#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void swapAlternat(int arr[], int n){
    for(int i=1; i<n; i+=2){
        swap(arr[i-1], arr[i]);
    }
}
int main(){
    int arrEven[10]={21,34,55,5,6,74,67,52,8,9};
    int arrOdd[9]={76,5,15,4,3,45,6,3,41};
    printArray(arrEven, 10);
    printArray(arrOdd, 9);
    swapAlternat(arrEven, 10);
    swapAlternat(arrOdd, 9);

    cout<<"After swaping: \n";
    printArray(arrEven, 10);
    printArray(arrOdd, 9);

}