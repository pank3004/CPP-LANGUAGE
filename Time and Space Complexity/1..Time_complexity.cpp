#include<iostream>
using namespace std;
int sum_in_range(int x, int y){
    int result=0;
    for(int i=x;i<=y; i++){
        result+=i;
    }
    return result;
}
int sum_in_range_obtimised(int x , int y){
    int n=(y-x+1);
    int a=x;
    int d=1;
    int result=n*(2*a+(n-1)*d)/2;
    return result;
}
int main(){
    cout<<sum_in_range(2,100000)<<endl;       // to execute no. of operation/instructions=~100000
    cout<<sum_in_range_obtimised(2,6);        // to execure no. of operation/instructions=~<10 ----> so this is the optimised code best execute fast
    return 0;
}