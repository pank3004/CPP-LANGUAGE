#include<iostream>
#include<vector>
using namespace std; 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	vector<vector<int>> ans;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			for(int k=j+1; k<n; k++){
				if(arr[i]+ arr[j]+ arr[k]==K){
					vector<int> temp;
					temp.push_back(arr[i]);
					temp.push_back(arr[j]);
					temp.push_back(arr[k]);
					
					ans.push_back(temp);
				}
			}
		}
	}
	return ans;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 4, 14, 1, 32, 4, 34};
    vector<vector<int>> ans = findTriplets(arr, arr.size(), 6);
    
    for(vector<int> triplet : ans) {
        for(int elm : triplet) {
            cout << elm << " ";
        }
        cout << endl;
    }

    return 0;
}