#include<iostream>
#include<limits.h>       // for INT_MIN and INT_MAX
using namespace std;
class Stack{
    int capacity;
    int *arr;
    int top;   // top index
    public: 
    Stack(int c){      // this Stack is the parameterised constractor
        this->capacity=c;
        arr=new int[c];   // create an array using dynamic memory allocation size of this arr is c (int)
        this->top=-1;   // initialization the top by one
    }
    void push(int data)
    {
        if(this->top==this->capacity-1)
        {
            cout<<"OverFlow\n";
            return;
        }
        this->top++;
        this->arr[this->top]=data;
    }
    
    int pop()
    {
        if(this->top==-1)
        {
            cout<<"UnderFlow\n";
            return INT_MIN;
        }
        this->top--;
    }
    int getTop()
    {
        if(this->top==-1)
        {
            cout<<"UnderFlow\n";
            return INT_MIN;
            
        }
        return this->arr[this->top];
    }
    bool isEmpty()
    {
        return this->top==-1;
    }
    int size()
    {
        return this->top+1;
    }
    bool isFull()
    {
        return this->top==this->capacity-1;
    }

};
int main()
{
    Stack st(5);
    st.push(5);
    st.push(4);
    st.push(3);
    cout<<st.getTop()<<endl;
    st.push(2);
    st.push(1);
    cout<<st.getTop()<<endl;
    st.push(11);

    st.pop();
    st.pop();
    cout<<st.getTop()<<endl;

    return 0;
}