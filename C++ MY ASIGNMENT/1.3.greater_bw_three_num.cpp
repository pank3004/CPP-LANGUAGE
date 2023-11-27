// program for find out the greater b/w three number

        // case 1:    this is only for ,, when all three numbers are different

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a b and c : ";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"a is greater "<<endl;
        }
        else
        {
            cout<<"c is greater"<<endl;
        }    
    }
    else 
    {
        if (b>c)
        {
            cout<<"b is greater"<<endl;
        }
        else
        {
            cout<<"c is greater"<<endl;
        }   
    }
    return 0;
}        

        //case 2: this will work for every values eg. all three are same(6,6,6) || two values are same and one diff.(4,6,4)||all are different(5,6,7)
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"Enter the value of a b and c : ";
//     cin>>a>>b>>c;
//     if(a==b && b==c)
//     {
//         cout<<"three are equal"<<endl;
//     }

//     else if(a>b && a==c)
//     {
//         cout<<"a & c both same and greater than b"<<endl;
//     }
//     else if(b>a && b==c)
//     {
//         cout<<"b & c both same and greater than a"<<endl;
//     }
//     else if(a>c && a==b)
//     {
//         cout<<"a & b both same and greater than c"<<endl;
//     }
    
//     else if(a>b)
//     {
//         if(a>c)
//         {
//             cout<<"a is greater "<<endl;
//         }
//         else
//         {
//             cout<<"c is greater"<<endl;
//         }           
//     }
//     else 
//     {
//         if (b>c)
//         {
//             cout<<"b is greater"<<endl;
//         }
//         else
//         {
//             cout<<"c is greater"<<endl;
//         }       
//     }
//     return 0;
// }

