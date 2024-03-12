#include<iostream>
#include <climits>
using namespace std;
int minElm(int ar[] ,int n){
    int min=INT_MAX;
    for(int i=0; i<n; i++){
        if(ar[i]<min){
            min=ar[i];
        }
    }
    return min;
}
int maxElm(int ar[], int n){
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(ar[i]>max){
            max=ar[i];
        }
    }
    return max;
}
int main(){
    int arr[5]={32,34,4,5,42,};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=maxElm(arr,n);
    cout<<"max valuse is: "<<max;  
    cout<<"\n";
    int min=minElm(arr,n);
    cout<<"min value is: "<<min;

    return 0;
}