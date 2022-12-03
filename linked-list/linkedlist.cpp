#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

void insertAthead(Node* &head, int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void traverse(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* obj=new Node(3);
    Node* head=obj;
    insertAthead(head,5);
    insertAthead(head,4);
    insertAthead(head,7);
    traverse(head);
    
    return 0;
}