#include<iostream>
#include <cmath>
using namespace std;

bool isPalindrome(int n){
    int num=n;
    int pn=0;
    while(num>0){
      
        pn = pn*10 + num%10;

        num=num/10;
    } 

    return n==pn;

}

int main(){
    int n=89898;
    cout<<isPalindrome(n)<<endl;
}