#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,r; 
    cout<<"Enter the value of num: ";
    cin>>num;           
    while(num>0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    cout<<"sum of digits is: "<<sum<<endl;
    return 0;

}