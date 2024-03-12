// Cheak given number is power of 2 or no?

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count=0;
    while(n>0){
       int r= n%2;
       if(r==1){
        count++;
       }
       n=n/2;
    }
    if(count==1){
        cout<<"yes";
    }else{
        cout<<"No";
    }
    
}