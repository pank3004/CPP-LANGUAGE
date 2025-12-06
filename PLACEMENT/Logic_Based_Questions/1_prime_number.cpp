#include<iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){

    if(n<=1){
        return false;
    }

    for(int i=2; i<int(sqrt(n)+1); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){

// 1 find starting 10 prime number(asked in Xebia Intelligent Automation Interview)
    int c=1;
    int i=2;
    while(c<=10){
        if (isPrime(i)){
            cout<<i<<", ";  
            c++; 
        }
        i++;    
    }
    cout<<endl;

// 2 find all prime number in a given range

    int a=7; 
    int b=67;

    for(int i=a; i<b+1; i++){
        if (isPrime(i)){
            cout<<i<<",";
        }
    }
}