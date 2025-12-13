#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,1,4, 5, 4, 2, 7, 9, 4, 6,2, 23,5,3,4};
    int n=sizeof(arr)/sizeof(arr[0]); 
    int total_duplicates=0;
    
    for(int i=0; i<n; i++){
        int count=1;

        if(arr[i]==-1) continue;

        for(int j=i+1; j<n; j++){
            if(arr[j]==arr[i]){
                arr[j]=-1;
                count++;
            }
        }
        if(count>1){
            cout<<arr[i]<<", frequency="<<count<<endl;
            total_duplicates++;
        }

    }
    cout<<"total duplicates:"<<total_duplicates<<endl;

    return 0;
}