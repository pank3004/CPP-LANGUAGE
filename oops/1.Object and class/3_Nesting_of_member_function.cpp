/*
Nesting of Member Functions:-
If one member function is called inside the other member function of the same class
it is called nesting of a member function.
*/


#include <iostream>
#include <string>
using namespace std;
class binary
{
private: 
    string s;
    void chk_bin(void);

public:
    void read(void);
    
    void ones_complement(void);      //dnes complement: invert each bit of given binary number
    void display(void);
};


void binary ::read(void)
{
    cout << "Enter a string: ";
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect format" << endl;
            exit(0);
        }
    }
}
void binary :: ones_complement(void){

    chk_bin();        // this is the nesting of the fuction it is private so don't called by object so when we will call ones_complement then it will call automatiocally
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='1'){
            s.at(i)='0';
        }
        else{
            s.at(i)='1';
        }
    }
    cout<<endl;
}
void binary :: display(void){
    
    for(int i=0; i<s.length(); i++){
        cout<<s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
   // b.chk_bin();
    cout<<"displaying binary: ";
    b.display();

    b.ones_complement();

    cout<<"displaying binary after binary: ";
    b.display();
    return 0;
}