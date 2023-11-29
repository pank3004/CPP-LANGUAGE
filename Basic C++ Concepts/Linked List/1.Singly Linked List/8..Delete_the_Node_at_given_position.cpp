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

void deleteAtTail(Node* &head){
    Node* second_last=head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;
    }
    // here second_last points to the second last node

    Node* temp=second_last->next;      // temp wil point to the last node to be deleted
    second_last->next=NULL;            // assign the NULL in the second last node
    free(temp);                        // to free the memory space of the last node 

}
void deleteAtStart(Node* &head){
    Node* temp=head;    // this is that node ,, we want to delete
    head=head->next;
    free(temp);
}
void deleteAtPos(Node* &head, int pos){
    if(pos==0){
        deleteAtStart(head);
        return;
    }
    int curr_pos=0;
    Node* prev=head;
   
    while(curr_pos!=pos-1){
        prev=prev->next;
        curr_pos++;    
    }
    // now prev point to the node of pos-1
    Node* temp=prev->next;   // means temp points to the node at the pos
    prev->next=prev->next->next;
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
    cout<<"Insert Node at the start: \n";
    insertAtHead(head,9);
    display(head);
    insertAtHead(head,110);
    display(head);
    insertAtHead(head,122);
    display(head);


    cout<<"Insert Node at the End of the linked list: \n";
    insertAtTail(head,90);
    display(head);
    insertAtTail(head,78);
    display(head);

    cout<<"Insert Node at the given position: \n";
    insertAtArbitary(head,250,2);
    display(head);

    cout<<"Update the node at the given position: \n";
    updationAtPos(head, 2, 8);
    display(head);

    cout<<"Delete the Node at the Start: \n";  
    deleteAtStart(head);
    display(head);

    cout<<"Delete the node at the end of the linked list: \n";
    deleteAtTail(head);
    display(head);

    cout<<"Delete the node at the given position: \n";
    deleteAtPos(head,2);
    display(head);

    return 0;
}