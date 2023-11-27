//print 1 to 10 except multiple of 3

#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
   
    return 0;
}