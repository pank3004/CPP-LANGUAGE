#include<iostream>
using namespace std;
void merge(int arr[],int s, int mid, int e){
    int an=mid-s+1;
    int bn=e-mid;
    // creats 2 tem array
    int a[an],b[bn];
    for(int i=0; i<an; i++){
        a[i]=arr[s+i];
    }
    for(int j=0; j<bn; j++){
        b[j]=arr[mid+j+1];
    }

    int i=0,j=0; // initial index of array a and array b
    int k=s; // initial index of merged subarray
    while(i<an && j<bn){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
    while(i<an){
        arr[k++]=a[i++];
    }
    while(j<bn){
        arr[k++]=b[j++];
    }
    
}
void mergeSort(int arr[],int s,int e){
    if(s<e){
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,mid,e);
    }

}
int main()
{
    int arr[]={10,28,24,6,34,18,38,44};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

