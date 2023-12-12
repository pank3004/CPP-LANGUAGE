#include<iostream>
using namespace std;

class bankDeposit {
    int principle;
    int year;
    float interestRate;
    float returnValue;
public: 
    bankDeposit(){};
    bankDeposit(int p, int y , float r);    // interest rate can be like 0.04,0.1... 
    bankDeposit(int p, int y, int R);       // interest rate R can be integer 1,4,5......
    void show();
};

bankDeposit :: bankDeposit(int p, int y, float r){
    principle=p;
    year=y;
    returnValue=principle;
    interestRate=r;
    for(int i=0; i<y; i++){
        returnValue= returnValue*(1+interestRate);
    }
}
bankDeposit :: bankDeposit(int p, int y, int R){
    principle=p;
    year=y;
    returnValue=principle;
    interestRate=(float)R/100;
    for(int i=0; i<y; i++){
        returnValue= returnValue*(1+interestRate);
    }
}
void bankDeposit :: show(){
    cout<<endl<<"Principal amount was "<<principle
        << ". Return value after "<<year
        << " years is "<<returnValue<<endl;
}

int main(){
    bankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1=bankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = bankDeposit(p, y, R);
    bd2.show();
    return 0;
}
