// What if there exists a local variable with the same name as that of the global variable inside a functon
// Scope resolotion operator(::)-use to access global variable 
#include<iostream>
using namespace std;
void print();
int apples=89;      
int main()
{
    int apples=45;       
    cout<<apples<<endl;      // access local variable    45
    cout<<::apples<<endl;    // access global variable   89
    print();
    return 0;
}
void print()
{
    cout<<apples<<endl;   //  access global variaabl     89
}
