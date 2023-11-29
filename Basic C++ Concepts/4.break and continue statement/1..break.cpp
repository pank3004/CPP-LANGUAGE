// print the first multiple of 5 which is also a multiple of 7

#include<iostream>
using namespace std;
int main()
{
    int i=5;
    while(true){            // true means i always enter in loop
        if(i%7==0){
            cout<<i<<endl;
            break;           // break => out side the loop(final ans.)
        }
        i=i+5;
    }
   
    return 0;
}