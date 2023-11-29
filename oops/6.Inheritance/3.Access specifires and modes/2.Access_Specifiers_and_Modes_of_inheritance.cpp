#include<iostream>
using namespace std;
class parent{
public:
    int x=3;

protected:
    int y;

private:
    int z;

};
class child1: public parent{         // parent class inherit publically in the child class
    //x will remain public
    //y will reamin procted
    //z wll not be accessible
};  
class child2: protected parent{    // parent class inherit protectedlly in the child class
    //x will be protected
    //y will be protected
    //z will be inaccessible
}; 
class child3: private parent{    //// parent class inherit privatelly in the child class
    //x will be private
    //y will be private
    //z will be inaccessible
};
int main()
{
    parent p;
    cout<<p.x<<endl;
    // cout<<p.y<<endl;         // give error bz y is protected
    // cout<<p.z<<endl;         // give error bz z is private
    return 0;

}

                
