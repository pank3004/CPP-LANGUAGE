#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter n: ";
    cin>>n;
    int i=1;
    do{
        sum=sum+i;
        i++;
    }while(i<=n);
  
    cout<<"sum of first n natural number: "<<sum<<endl;
    
    return 0;
}