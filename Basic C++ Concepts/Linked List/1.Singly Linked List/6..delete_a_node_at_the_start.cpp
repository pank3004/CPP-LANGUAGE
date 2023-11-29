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
void updationAtPos(Node* &head, int pos, int val){
    Node* temp=head;
    int corr_pos=0;
    while(corr_pos!=pos){
        temp=temp->next;
        corr_pos++;
    }
    temp->value=val;   // here temp will point to the node at pos 
}
void deleteAtStart(Node* &head){
    Node* temp=head;    // this is that node ,, we want to delete
    head=head->next;
    free(temp);
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

    updationAtPos(head, 2, 8);
    display(head);
    
    deleteAtStart(head);
    display(head);
    return 0;
}