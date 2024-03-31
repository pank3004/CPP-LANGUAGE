#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr) {
        int s=0;
        int e=arr.size()-1;
        while(s<e){
            int mid=s+(e-s)/2;
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }else{
                e=mid;
            }
        }
        return s;
}
int main(){
    vector<int> arr={7,9, 14, 18, 15, 3, 2};
    int ans=peakIndexInMountainArray(arr);
    cout<<ans<<endl;
    return 0;
}