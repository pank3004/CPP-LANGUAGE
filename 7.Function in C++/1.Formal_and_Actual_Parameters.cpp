#include<iostream>
using namespace std;
void add(int x , int y)    // x and y is the formal paremeters(defined at the time of funtion definition)
{
    int sum;
    sum=x+y;
    cout<<sum<<endl;
}
int main()
{
    int a=13,b=6;
    add(a,b);         // a and b is the actual parametersf(passes at calling time)
    return 0;
}