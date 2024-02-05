#include<iostream>
using namespace std;
char Tree[10];
void root(char key){
    if(Tree[0]!='\0'){
        cout<<"This is not empty so we can't fill at this pos"<<endl;
    }
    else{
        Tree[0]=key;
    }
}

void left_child(char key, int parent){
    if(Tree[parent]=='\0'){
        cout<<"parent is not present so we can't fill left child"<<endl;
    }
    else{
        Tree[(2*parent)+1]=key;
    }
}

void right_child(char key, int parent){
    if(Tree[parent]=='\0'){
        cout<<"parent is not present so we can't fill right child"<<endl;
    }
    else{
        Tree[(2*parent)+2]=key;
    }
}
void printTree() {
    for(int i=0; i<10; i++){
        if(Tree[i]!='\0'){
            cout<<Tree[i]<<" ";
        }
        else{
            cout<<"_"<<" ";
        }
    }
}
 
int main(){
    char Tree[10];
    root('A');
    left_child('B',0);
    right_child('C',0);
    left_child('D', 1);
    right_child('E',2);
    printTree();
    return 0;
}