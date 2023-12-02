#include<iostream>
using namespace std;
int firstOccurence(int arr[], int size, int key){
    int s=0; 
    int e=size-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

int lastOccurence(int arr[], int size, int key){
    int s=0; 
    int e=size-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int main()
{
    int arr[10]={2,3,4,4,4,4,4,4,4,5};
    int fo=firstOccurence(arr, 10, 4);
    int lo=lastOccurence(arr, 10, 4);
    cout<<"first occurence: "<<fo<<endl;
    cout<<"last occurence: "<<lo<<endl;
    cout<<"total n. of occ: "<<(lo-fo+1)<<endl;

    return 0;
}