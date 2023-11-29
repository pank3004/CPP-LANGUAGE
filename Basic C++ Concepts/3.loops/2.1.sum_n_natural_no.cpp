#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter n: ";
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"sum of first n natural number: "<<sum<<endl;
    
    return 0;
}