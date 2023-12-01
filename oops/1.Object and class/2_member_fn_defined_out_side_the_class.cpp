#include<iostream>
using namespace std;
class employee{
private: 
    int a,b,c;
public: 
    int d,e;

    void setData(int a1, int a2, int a3);  //only declaration here
    void getData(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
    }
};
void employee :: setData(int a1,int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee em;
    em.d=45;
    em.e=60;
    em.setData(3,4,30);
    em.getData();
    return 0;
}