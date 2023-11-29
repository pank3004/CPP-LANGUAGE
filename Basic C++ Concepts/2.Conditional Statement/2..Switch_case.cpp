// calculator

#include<iostream>
using namespace std;
int main()
{
  //  char choise;
    float a,b;
    char choise;

    cout<<"Enter the value of a and b:";
    cin>>a>>b;
    cout<<"a="<<a<<", b="<<b<<endl;
    cout<<"Enter choise(+,-,*,/): ";

    cin>>choise;
    cout<<"choise is: "<<choise<<endl;
    switch(choise){
        case '+': cout<<(a+b)<<endl;
                  break;
        case '-': cout<<(a-b)<<endl;
                  break;
        case '*': cout<<(a*b)<<endl;
                  break;
        case '/': cout<<(a/b)<<endl;
                  break;
        default: "no case match !";
    }
    return 0;

}