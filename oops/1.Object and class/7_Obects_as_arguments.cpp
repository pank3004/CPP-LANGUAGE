            // adition of two complex number

#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
public: 
    void setData(int x, int y){
        a=x;
        b=y;
    }
    void getData(){
        cout<<"the comlex no. is: "<<a<<" + "<<b<<"i"<<endl;

    }
    void setDataBySum(complex c1 , complex c2){
        a=c1.a + c2.a;
        b=c1.b + c2.b;

    }
};
int main(){
    complex c1,c2, c3;
    c1.setData(3,4);
    c1.getData();

    c2.setData(5,8);
    c2.getData();

    c3.setDataBySum(c1,c2);
    c3.getData();

    return 0;
}



// // objects passing as a argument in the function
// //eg. additon of value to two object.

// #include<iostream>
// using namespace std;
// class myClass{
//     public: 
//     int a;
//     void getData(int x){
//         a=x;
//     }
//     void showData(){
//         cout<<a<<endl;
//     }
//     void add(myClass p, myClass q)
//     {
//         a=p.a + q.a;
//         cout<<"add is: "<<a<<endl;
//     }
    
// };
// int main()
// {
//     myClass ob1,ob2,ob3;
//     ob1.getData(6);
//     ob2.getData(8);
//     ob1.showData();
//     ob2.showData();
//     ob3.add(ob1, ob2);
    
//     return 0;
// }