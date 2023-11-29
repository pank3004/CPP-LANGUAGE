#include<iostream>
using namespace std;
int main()
{
    int a=13,b=17;
//Arithmatic operatores

    cout<<"a+b="<<a+b<<endl;
    cout<<"a-b="<<a-b<<endl;
    cout<<"a*b="<<a*b<<endl;
    cout<<"a/b="<<a/b<<endl;   // complete division
    cout<<"a%b="<<a%b<<endl;   // remainder

//Relational Operators----> ans. in boolian ex. true(1) or false(0)

    if (a==b){
        cout<<"if a is equal to b then this execute"<<endl;
    }

    if (a!=b){
        cout<<"if a is not equal to b then this execute"<<endl;
    }

    if (a>b){
        cout<<"if a is grater then b ,then this execute"<<endl;
    }

      if (a<b){
        cout<<"if a is less then b ,then it will be execute"<<endl;
    }
       if (a>=b){
        cout<<"if a is grater then b or a is equal to b ,then it will be execute"<<endl;
    }

       if (a<=b){
        cout<<"if a is less then b or a is equal to b,then it will be execute"<<endl;
    }

//Logical Operators: 

    if (a>10 && a%2==0){
        cout<<"if both conditon are true , then it will be execute"<<endl;
    }

    
    if (a>10 || a%2==0){
        cout<<"min one cond. must be True , then it will be execute"<<endl;
    }

//Asignment Operators:-
    int c;

    c=a+b;     // the value of a+b is asigning in c
    cout<<"the value of c is: "<<c<<endl;
    
    c+=1;      // means c=c+1
    cout<<"the value of c is: "<<c<<endl;

    c*=2;      // c=c*2
    cout<<"the value of c is: "<<c<<endl;

    c/=3;     // c=c/3
    cout<<"the value of c is: "<<c<<endl;

    c%=5;      // c=c%5   
    cout<<"the value of c is: "<<c<<endl;

//Bitwise Operators: 

//1.bitwise not(~):(~0=>1,~1=>0)

    cout<<"~5=>"<<~5<<endl;      //5=>0101
                         //~5=> -(0101+0001)=>-(0110)=>-6
    
//2.left shift(<<):
    int x;
    x=5;                   
    cout<<(x<<1)<<endl;     //5=>0101<<1=>1010=>10
    cout<<(x<<2)<<endl;     //5=>0101<<2=>10100=>20

//3.right shift(>>):
    cout<<(x>>1)<<endl;     //5=>0101>>1=>0010=>2
    cout<<(x>>2)<<endl;     //5=>0101>>2=>0001=>1

//4.bitwise or(|):
    cout<<(1|1)<<endl;  //1
    cout<<(1|0)<<endl;  //1
    cout<<(0|1)<<endl;  //1
    cout<<(0|0)<<endl;  //0
//5.bitwise and(&):
    cout<<(1&1)<<endl;  //1
    cout<<(1&0)<<endl;  //0
    cout<<(0&1)<<endl;  //0
    cout<<(0&0)<<endl;  //0
//6.bitwise exclusive or(^):
    cout<<(1^1)<<endl;  //0
    cout<<(1^0)<<endl;  //1   // same=>0
    cout<<(0^1)<<endl;  //1   // opposit=>1
    cout<<(0^0)<<endl;  //0

//Misc Operators: 
//1.sizeof operator:
    int y=8;
    cout<<sizeof(a)<<endl;    // 4 bytes(int)

//2.ternary operator:(short form of if-else statement):
    int p;
    cout<<(4==5?p=9:p=10)<<endl; //p=10

//3.casting operator:
    float r=3.14;
    cout<<r<<endl;        //r=3.14
    cout<<(int)r<<endl;   //r=3

//4.address(&) and pointer(*) operator: 
    int s=4;
    int *ptr;
    ptr=&s;
    cout<<ptr<<endl;   //0x7fff0a2f2b50
    cout<<*ptr<<endl;  // 4
    cout<<&s<<endl;    //0x7fff0a2f2b50
    cout<<&ptr<<endl;  //0x7fff0a2f2b70

//Unary operator:
//1.increment operator: 
    int d=5,e=7;
    //post increment and post decrement
    cout<<d++<<endl;   //d=5
    cout<<d<<endl;     //d=6
    cout<<d--<<endl;   //d=6
    cout<<d<<endl;      //d=5
    //pre increment and pre decrement
    cout<<++e<<endl;   //e=8
    cout<<e<<endl;     //e=8
    cout<<--e<<endl;   //e=7
    cout<<e<<endl;       //e=7





}