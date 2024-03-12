// Problem statement
// You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

// Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

// Note :
// 1. The length of each array is greater than zero.
// 2. Both the arrays are sorted in non-decreasing order.
// 3. The output should be in the order of elements that occur in the original arrays.
// 4. If there is no intersection present then return an empty array.



     // logic is right but more time complexity so on leetcode/ codestudio  time limit exceeded not submited(not optimised)



// #include<iostream>
// #include<vector>
// #include<limits.h> 
// using namespace std;
// int main(){
//     vector<int> v1={2,3,4,5,9,10};
//     vector<int> v2={1,4,6,8,9};
//     vector<int> ans;
//     for(int i=0; i<v1.size(); i++){
//         int elm=v1[i];
//         for(int j=0; j<v2.size(); j++){
//             if(elm<v2[j]){
//                 break;
//             }
//             if(elm==v2[j]){
//                 ans.push_back(v1[i]);
//                 v2[j]=INT_MIN;
//                 break;

//             }
//         }
        
//     }

//     for(int k=0;k<ans.size(); k++){
//         cout<<ans[k]<<" ";
//     }

// }







                                     // this is the optimised solution: 



#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr1={2,3,4,5,9,10};
    vector<int> arr2={1,4,6,8,9};
    int n=arr1.size();
    int m=arr2.size();
    vector<int> ans;
	int i=0;
	int j=0;
	while(i<n && j<m){
		if(arr1[i]<arr2[j]){
			i++;
		}else if(arr1[i]==arr2[j]){
			ans.push_back(arr1[i]);
			i++;
			j++;
		}else{
			j++;
		}
	}

    for(int k=0;k<ans.size(); k++){
        cout<<ans[k]<<" ";
    }


}


