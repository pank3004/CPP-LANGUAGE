#include<iostream>
using namespace std;

int binarySearch(int arr[],int size, int key){
    int start=0;
    int end=size-1;
  
    while(start<=end){ 
        int mid = start + (end - start) / 2;  
          // we can write mid=(start+end)/2 but int range is only from (-2^31 to +2^31-1)or(−2147483648 to 2147483647)
          // if start=2^31 and end=2^32  then start+end will go out of range so we will use always  int mid = start + (end - start) / 2;
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
int main(){
    int even[6]={2,4,6,8,10,12};
    int odd[6]={1,3,5,7,9,11};
    int index=binarySearch(even,6,12);
    cout<<index<<endl;
    
    return 0;
}

