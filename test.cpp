#include<iostream>
using namespace std;

class bankDeposit {

    int principle;
    int year;
    float interestRate;
    float returnValue;

public:
    bankDeposit(){};
    bankDeposit(int p, int year, float r);
    bankDeposit(int p, int year, int R);
    void show();
};

bankDeposit :: bankDeposit(int p, int y, float r){
    principle=p; 
    year=y;
    interestRate=r;
    returnValue=principle;
    for(int i=0; i<year; i++){
        returnValue=returnValue*(1+interestRate);
    }

}
bankDeposit :: bankDeposit(int p, int y, int R){
    principle=p; 
    year=y;
    interestRate=(float)R/100;
    returnValue=principle;
    for(int i=0; i<year; i++){
        returnValue=returnValue*(1+interestRate);
    }
}

void bankDeposit ::  show(){
    cout<<returnValue<<endl;
}
int main() {
    float r=0.4;
    int R=5;
    int y=1;
    int p=100;
    bankDeposit b1;
    b1=bankDeposit(p,y,r);
    b1.show();
    bankDeposit b2;
    b2=bankDeposit(p,y,R);
    b2.show();
   
    return 0;
}