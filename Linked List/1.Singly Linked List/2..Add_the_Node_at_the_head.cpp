#include<iostream>
using namespace std;
class Node{
public:
    int value;
    Node *next;
    Node(int data){   // constructor to give the value of the node
        value=data;
        next=NULL;   // initialize next to the NULL
    }
};
void insertAtHead(Node* &head,int val){    // adding new node at head
    Node*new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}
void display(Node* head){     //traversing in the linked list
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    Node* head=NULL;
    insertAtHead(head,9);
    display(head);
    insertAtHead(head,7);
    display(head);
    insertAtHead(head,3);
    display(head);

    return 0;
}