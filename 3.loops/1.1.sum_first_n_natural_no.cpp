
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter n: ";
    cin>>n;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<"sum of first n natural number: "<<sum<<endl;
    
    return 0;
}