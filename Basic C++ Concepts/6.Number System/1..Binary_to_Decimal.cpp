#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0,pow=1;
    cout<<"Enter a number in binary: ";
    cin>>n;       //1101
    while(n>0)
    {
        r=n%10;     //r=1,
        sum=sum+pow*r;  // sum=1
        pow=pow*2;
        n=n/10;
    }
    cout<<"conversion of binary to decimal is: "<<sum<<endl;
    return 0;
}