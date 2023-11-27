

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"number is "<<num<<endl;
    if(num%3==0){
        cout<<num<<" is divisiable by 3"<<endl;
        if(num%2==0){
        cout<<num<<" is even number"<<endl;    
        }
        else if(num>=10){
            cout<<num<<" is grater than 10"<<endl;
        }
        else{
            cout<<num<<" nither even or not grater than 10"<<endl;
        }
    }
    else{
        cout<<num<<" is not divisiable by 3"<<endl;
        
    }
}