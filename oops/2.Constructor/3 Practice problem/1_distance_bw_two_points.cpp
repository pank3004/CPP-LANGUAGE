// create a function (friend function) which take 2 point objects and compute the distance b/w those points

#include<iostream>
#include <cmath>

using namespace std;

class Point {
    int x,y;
    static int count;
public: 
    Point(int a, int b){
        x=a;
        y=b;
        count++;
    }
    void getData(){
        cout<<"point "<<count<<" is "<<"("<<x<<","<<y<<")"<<endl;
    }
    friend float pointDistance(Point c1, Point c2);
};

float pointDistance(Point c1, Point c2){
    return sqrt(pow((c2.y-c1.y),2)+pow((c2.x-c1.x),2));
}

int Point :: count;
int main() {
    Point p1(1,6);
    p1.getData();

    Point p2(9,2);
    p2.getData();

    float distance=pointDistance(p1,p2);
    cout<<"The distance between the points: "<<distance<<endl;
    return 0;
}