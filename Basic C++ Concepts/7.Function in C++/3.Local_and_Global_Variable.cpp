#include<iostream>
using namespace std;
void print();
int b=89;      // this is the global variable,, scope of this is everywhere in the whole program
int main()
{
    int a=45;       // this is the local variable,,scope of this is only in main function
    cout<<a<<endl;
    cout<<b<<endl;
    print();
    return 0;
}
void print()
{
    cout<<b<<endl;
 // cout<<a<<endl;    // it throw error because a is the local variable         
}
