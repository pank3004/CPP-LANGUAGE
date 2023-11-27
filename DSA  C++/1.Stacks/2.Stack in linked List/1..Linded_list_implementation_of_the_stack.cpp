#include<iostream>
#include<limits.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
 
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
class Stack{
    Node* head;
    int capacity;
    int current_size;

    public: 
    Stack(int c){
        this->capacity=c;
        this->current_size=0;
        this->head=NULL;
    }
    bool isEmpty(){
       return this->head==NULL;
    }
    bool isFull(){
        return this->current_size==this->capacity;
    }
    void push(int data){
        if(this->current_size==this->capacity)
        {
            cout<<"Overflow"<<endl;
            return;
        }
        Node *new_node=new Node(data);
        new_node->next=this->head;
        this->head=new_node;
        this->current_size++;
    }
    int pop(){
        if(this->head==NULL){
            cout<<"Underflow condiotion\n";
            return INT_MIN;
        }
        Node* new_head=this->head->next;
        this->head->next=NULL;
        Node* to_be_removed=this->head;
        int removed_data=to_be_removed->data;
        delete to_be_removed;
        this->head=new_head;
        this->current_size--;
        return removed_data;    
    }
    int size(){
        return this->current_size;
    }
    int getTop(){
        if(this->head==NULL){
            cout<<"Underflow condition"<<endl;
            return INT_MIN;
        }
        return this->head->data;
    }
};
int main()
{
    Stack st(5);

    st.push(5);
    st.push(4);
    st.push(3);

    cout<<"top element: "<<st.getTop()<<endl;

    st.push(2);
    st.push(1);

    cout<<"top element: "<<st.getTop()<<endl;

    st.push(11);   // overflow condition

    st.pop();
    st.pop();

    cout<<"top element: "<<st.getTop()<<endl;

    cout<<"size of the linked list: "<<st.size()<<endl;

    cout<<"is linded list empty:"<<st.isEmpty()<<endl;

    cout<<"is linded list full:"<<st.isFull()<<endl;

    st.pop();
    st.pop();
    st.pop();
    st.pop();   // underflow condition

    return 0;
}