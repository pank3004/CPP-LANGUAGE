// my system is taking address as 4 byte may be some other system is take 8 byte to store address

#include<iostream>
using namespace std;

int main() {
    int arr[10]={4,8,16,23,24};
    cout<<"add. of 1st block of arr: "<<arr<<endl;
    cout<<"add. of 1st block of arr: "<<&arr[0]<<endl;
    cout<<"add. of 1st block of arr: "<<&arr<<endl;
    cout<<"value 1st block of arr: "<<arr[0]<<endl;
    cout<<"value 1st block of arr: "<<*arr<<endl;
    cout<<*arr+1<<endl;   // 5(4+1)
    cout<<*(arr)+1<<endl;   // 5(4+1)
    cout<<*(arr+1)<<endl;  //8
    cout<<*(arr+2)<<endl; //16
    cout<<arr[2]<<endl; //16

    int i=2;
    cout<<i[arr]<<endl;   //16    arr[i]=*(arr+i) ,,, i[arr]=*(i+arr)


    // differences b/w array and pointer
//first
    int temp[10]={5,8,11};
    int *ptr=&temp[0];
    cout<<sizeof(temp)<<endl;  // 10*4=40
    cout<<sizeof(*temp)<<endl;  // 4 
    cout<<sizeof(&temp)<<endl;   //4

    cout<<sizeof(ptr)<<endl;   //4
    cout<<sizeof(*ptr)<<endl;  //4
    cout<<sizeof(&ptr)<<endl;  //4

//second
    int temp1[10]={5,8,11};
    int *ptr1=&temp1[0];
    
    cout<<temp1<<endl;   //2000
    cout<<&temp1<<endl;  //2000
    cout<<&temp1[0]<<endl; //2000

    cout<<ptr1<<endl;     //2000
    cout<<&ptr1<<endl;    //3000  ( address or the pointer veriable)

// third

    int ar[10]={45,65,7,6,87};
    int *p=&ar[0];
    
    //ar=ar+1;  // error we can't change symbol table

    cout<<p<<endl;  //2000
    p=p+1;
    cout<<p<<endl;     // 2004


    
    

    return 0;
}