/*
                        1
                      2   2
                    3       3
                  4 4 4 4 4 4 4

*/

                            // method 1
#include<iostream>
using namespace std; 
int main()
{
    int i,j,n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n; i++)
    {
        for(j=1; j<=2*n-1; j++)
        {
            if(i+j==n+1 || j-i==n-1 || i==n)
            {
                cout<<i<<" ";
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

                            // method 2
// #include<iostream>
// using namespace std; 
// int main()
// {
//     int i,j,n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(i=1;i<=n; i++)
//     {
//         for(j=1; j<=2*n-1; j++)
//         {
//             if(j>n-i && j<n+i)
//             {
//                 if(j==n-i+1 || j==n+i-1 || i==n)
//                 {
//                     cout<<i<<" ";
//                 }
//                 else
//                 {
//                     cout<<"  ";
//                 }

//             }
//             else
//             {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }