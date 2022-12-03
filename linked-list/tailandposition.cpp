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
void insertAtHead(Node* &head, int d){
        Node* newnode=new Node(d);
        newnode->next=head;
        head=newnode;
    }

void insertAttail(Node* &tail, int d){

        Node* newNode=new Node(d);
        tail->next=newNode;
        tail=newNode;

    }
    void insertAtposition(Node* &head,int pos,int d){
        if(pos==1){
            insertAtHead(head,d);

        }
        else{
            //step-1 creation of node
            Node* newnode=new Node(d);
            //step-2 
            Node* previous=head;
            int t=pos-2;
            while(t--){
                previous=previous->next;
            }
            //step-3 connection node
            newnode->next=previous->next;
            previous->next=newnode;
        }

    }
     void traverse(Node* &head){
        Node* temp=head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

int main(){
    Node* obj=new Node(3);
    Node* head=obj;
    Node* tail=obj;

    
    insertAttail(tail,5);
    // insertAtHead(head,5);
    insertAttail(tail,7);
    insertAttail(tail,9);
    insertAttail(tail,11);


    traverse(head);
    insertAtposition(head,1,20);
    traverse(head);



}