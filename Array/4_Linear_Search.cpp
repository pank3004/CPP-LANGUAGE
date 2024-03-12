// cheak key present or not in the array
#include<iostream>
using namespace std;
int linerSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={1,2,-4,5,2,-6,25,7,-3,26};
    int key;
    cout<<"Enter key: ";
    cin>>key;
    bool found=linerSearch(arr, 10, key);
    if(found){
        cout<<"key is present";
    }
    else{
        cout<<"key is not present";
    }
    

}