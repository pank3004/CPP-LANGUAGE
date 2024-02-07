#include<iostream>
using namespace std;
class Rectangle{
public:
    int l;
    int b;

    Rectangle(){        // default constructor--no ars pass
        l=0;
        b=0;
    }

    Rectangle(int x, int y){    // parameterised constructor--args pass
        l=x;
        b=y;
    }

    Rectangle(Rectangle &ref){   //copy constructor--initialize an obj by another existing obj
        l=ref.l;
        b=ref.b;
    }

    ~Rectangle(){
        cout<<"Destructor  called"<<endl;
    }


};
int main()
{
    Rectangle* r1=new Rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;

    Rectangle r2(4,6);
    cout<<r2.l<<" "<<r2.b<<endl;

    Rectangle r3=r2;
    cout<<r3.l<<" "<<r3.b<<endl;

    
    return 0;

}