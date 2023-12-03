#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
public: 
    void setId(){
        salary=122;
        cout<<"Enter the id of the employee: ";
        cin>>id;
    }
    void getId(){
        cout<<"the id of the employee is: "<<id<<endl;;
    }
};
int main()
{
    employee google[4];
    for(int i=0; i<4; i++){
        google[i].setId();
        google[i].getId();

    }
    return 0;
}