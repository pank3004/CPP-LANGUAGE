#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"number is "<<num<<endl;
    if(num%2==0){
        cout<<num<<" is even"<<endl;
    }
    else{
        cout<<num<<" is odd"<<endl;
    }
}