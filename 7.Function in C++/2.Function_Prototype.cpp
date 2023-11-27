#include<iostream>
using namespace std;
void add(int p,int q);  // this is function prototye (use when we define the function after calling)
int main()
{
    int a=13,b=6;
    add(a,b);        // function calling
    return 0;
}
void add(int x,int y)    // function defination
{
    int sum;
    sum=x+y;
    cout<<sum<<endl;
}