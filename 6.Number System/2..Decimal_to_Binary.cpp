#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0,pow=1;
    cout<<"Enter a number in decimal : ";
    cin>>n;       //14
    while(n>0)
    {
        r=n%2;     //r=0,1,1,1
        sum=sum+pow*r;  // sum=0,10,110,1110
        pow=pow*10;       //pow=10,100,1000,10000
        n=n/2;           //n=7,3,1,0
    }
    cout<<"conversion of decimal to binary is: "<<sum<<endl;
    return 0;
}