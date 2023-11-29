/*
            1 2 3 4 5 6 
            1         6
            1         6
            1 2 3 4 5 6
    
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
          if(i==1||i==m||j==1||j==n)
          {
            cout<<j<<" ";
          }
          else
          {
            cout<<"  ";
          }
        }
        
        cout<<endl;
    }
    return 0;
}

//method 2 without if else statement

