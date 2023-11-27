                //method 1: by creating a temp stack


// #include<iostream>
// #include<stack>
// using namespace std;
// stack<int> copyStack(stack<int> &input){
//     stack<int> temp; 
//     int curr;                 
//     while(not input.empty()){ //input=[1,2,3],[1,2],[1],[]
//         curr=input.top();     //curr=3,2,1                       
//         input.pop();         
//         temp.push(curr);      // temp=[3], [3,2], [3,2,1]
//     }
//     stack<int> result;
//     while(not temp.empty()){   //temp=[3,2,1],[3,2], [3],[]
//         curr=temp.top();       //curr=1,2,3   
//         temp.pop();
//         result.push(curr);     //result=[1],[1,2],[1,2,3]
//     }
//     return result;
// }
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     cout<<"this is the copy stack: \n";
//     stack<int> res=copyStack(st); 
  
//     while(not res.empty()){
//         int curr=res.top();  
//         res.pop();
//         cout<<curr<<endl;
//     }
//     return 0;
// }



                  //  method 2: by recurrsion

#include<iostream>
#include<stack>
using namespace std;
void f(stack<int> &st, stack<int> &result){
    if(st.empty()) return;
    int curr=st.top();
    st.pop();
    f(st,result);
    result.push(curr);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<"this is the copy stack: \n";
    stack<int> res;
    f(st,res);
    while(not res.empty()){
        int curr=res.top();  
        res.pop();
        cout<<curr<<endl;
    }
    return 0;
}