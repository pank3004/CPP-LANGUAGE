// objects passing as a argument in the function
//eg. additon of value to two object.

#include<iostream>
using namespace std;
class myClass{
    public: 
    int a;
    void getData(int x){
        a=x;
    }
    void showData(){
        cout<<a<<endl;
    }
    void add(myClass p, myClass q)
    {
        a=p.a + q.a;
        cout<<"add is: "<<a<<endl;
    }
    
};
int main()
{
    myClass ob1,ob2,ob3;
    ob1.getData(6);
    ob2.getData(8);
    ob1.showData();
    ob2.showData();
    ob3.add(ob1, ob2);
    
    return 0;
}