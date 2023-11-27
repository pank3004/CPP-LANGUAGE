#include<iostream>
using namespace std;
int main()
{
    int num,count=0; 
    cout<<"Enter the value of num: 6";
    cin>>num;
    while(num>0)
    {
        count++;
        num=num/10;
    }
    cout<<"number of digits is: "<<count<<endl;
    return 0;

}