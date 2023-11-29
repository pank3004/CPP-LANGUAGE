/*
            1 2 1 2 1 2
            2 1 2 1 2 1
            1 2 1 2 1 2
            2 1 2 1 2 1
    
*/

#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter m and n(rows and columns): ";
    cin>>m>>n;
    int i,j;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
          if((i+j)%2==0)
          {
            cout<<"1 ";
          }
          else
          {
            cout<<"2 ";
          }
        }
        
        cout<<endl;
    }
    return 0;
}

