/*
             * * * * * * 
             *         *
             *         *
             * * * * * *
*/

#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter m and n(rows and columns): ";
    cin>>m>>n;
    int i,j;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==m || j==1 || j==m){
                cout<<"* ";   
            }else{
                cout<<"    ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}