/*
            1 2 3 4 5 6 7
            2 3 4 5 6 7 1
            3 4 5 6 7 1 2
            4 5 6 7 1 2 3
            5 6 7 1 2 3 4
            6 7 1 2 3 4 5
            7 1 2 3 4 5 6

*/

// method 1 by if else statement

#include<iostream>
using namespace std;
int main()
{
    int i,j,n,c;
    cout<<"Enter n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c=i;
        for(j=1;j<=n;j++)
        {
          if(c<=n)
          {
            cout<<c<<" ";
            c++;
          }
          else
          {
            c=1;
            cout<<c<<" ";
            c++;
          }
        }
        
        cout<<endl;
    }
    return 0;
}

//method 2 without if else statement

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j,n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(i=1;i<=n;i++)
//     {
//         for(j=i;j<=n;j++)
//         {
//             cout<<j<<" ";
//         }
//         for(j=1;j<=i-1;j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

