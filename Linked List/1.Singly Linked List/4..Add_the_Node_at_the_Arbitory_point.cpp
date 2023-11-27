#include<iostream>
using namespace std;
class Node{
public:
    int value;
    Node* next;

    Node(int data){
        value=data;
        next=NULL;
    }
};
void insertAtHead(Node* &head, int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}
void insertAtArbitary(Node* &head, int val, int pos){
    if(pos==0){
        insertAtHead(head,val);
        return;
    }
    Node* new_node=new Node(val);
    Node* temp=head;
    int current_pos=0;
    while(current_pos!=pos-1){
        temp=temp->next;
        current_pos++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}
void insertAtTail(Node* &head, int val){
     Node* new_node=new Node(val);
     Node* temp=head;
   
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;  // before on this step temp has reached at last node
}

void display(Node* head){
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
    insertAtHead(head,110);
    display(head);
    insertAtTail(head,90);
    display(head);
    insertAtTail(head,78);
    display(head);
    insertAtArbitary(head,250,2);
    display(head);
    return 0;
}