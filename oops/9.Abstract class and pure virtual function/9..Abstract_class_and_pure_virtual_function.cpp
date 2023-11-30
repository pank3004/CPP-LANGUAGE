#include<iostream>
using namespace std;
class shape{
    public: 
    int height;
    int width;
    void setHeight(int h){
        height=h;
    }
    void setWidth(int w){
        width=w;
    }
    virtual int getArea()=0;
};
class Rectangle:public shape{
    public:
    int getArea(){
        return (height*width);
    }
};
class Tringle:public shape{
    public:
    int getArea(){
        return (height*width)/2;
    }

};
int main()
{
    Rectangle r;
    Tringle t;
    r.setHeight(10);
    r.setWidth(20);
    cout<<"Area of Rectangle = "<<r.getArea()<<endl;
    t.setHeight(10);
    t.setWidth(20);
    cout<<"Area of Tringle = "<<t.getArea()<<endl;

}