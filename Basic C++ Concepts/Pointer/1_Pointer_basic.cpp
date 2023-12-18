#include<iostream>
using namespace std;
int main() {
    int num=5;
    int *ptr=&num;
    cout<<"num="<<num<<endl;   //5
    cout<<"address stored in pointer="<<ptr<<endl;     //0x61ff08
    cout<<"adderss of num: "<<&num<<endl;    //0x61ff08
    cout<<"value at address stored in pointer ptr"<<*ptr<<endl;   //5
    cout<<"size of variable num: "<<sizeof(num)<<endl;   //4
    cout<<"size of pointer ptr: "<<sizeof(ptr)<<endl;     //4

    double num1=6;
    double *ptr1=&num1;
    cout<<"size of variable num1: "<<sizeof(num1)<<endl;     //8
    cout<<"size of pointer ptr1: "<<sizeof(ptr1)<<endl;       //4

    // do not
    int *p;
    cout<<"value at address stored in pointer ptr: "<<*p<<endl;    // garbage value

    int *p1=0;   // null pointer
    //cout<<*p1<<endl;     // segmentation fault



    int num2=50;
    int *p2=0;
    p2=&num2;
    cout<<num2<<endl;     //50


    int num3=8;
    int *p3=&num3;
    (*p3)++;
    cout<<p3<<endl;   //2000
    cout<<&num3<<endl; //3000
    cout<<&p3<<endl;   //5000
    cout<<"value: "<<*p3<<endl;  //9
    cout<<num3<<endl;     //9
    p3++;
    cout<<p3<<endl;    //2004
    cout<<&num3<<endl;  ///3000
    cout<<&p3<<endl;    //5000
    cout<<*p3<<endl;    // not will print 9


    // copy of the pointer: 
    int n=78;
    int *a=&n;
    int *b=a;
    cout<<*a<<endl;      //78 
    cout<<*b<<endl;     ///78


    return 0;
}