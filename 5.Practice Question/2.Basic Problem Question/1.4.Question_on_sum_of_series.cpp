// find the sum of the series ,,sum=1-2+3-4+5-6+7-8....n
#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
        else
        {
            sum=sum-i;
        }
    }
    cout<<"sum of series is: "<<sum<<endl;
    return 0;
}