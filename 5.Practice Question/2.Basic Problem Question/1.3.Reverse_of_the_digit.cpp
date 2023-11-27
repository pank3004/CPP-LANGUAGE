#include<iostream>
using namespace std;
int main()
{
    int num,temp=0,r; 
    cout<<"Enter the value of num: ";
    cin>>num;           //num=3456
    while(num>0)
    {
        r=num%10;         //r=6,5,4,3
        temp=temp*10+r;   //temp=6,65,654,6543
        num=num/10;       //num=345,34,3,0
    }
    cout<<"reverse of digits is: "<<temp<<endl;
    return 0;

}