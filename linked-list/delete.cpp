#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void inserttail(Node* &tail, int d){
    Node* newnode=new Node(d);
    tail->next=newnode;
    tail=newnode;
}

void deleteAtdata(Node* &tail, int target,int pos){
    Node* temp=tail;
    Node* prev=NULL;
    if(tail==NULL){
        return ;
    }
    if(target==temp->data && pos==1){
        tail=tail->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        while(temp!=NULL &&temp->data != target){
            prev=temp;
            temp=temp->next;
        
        }
        if(temp==NULL)
        cout<<"element not found";
        prev->next=temp->next;
        temp->next=NULL;
        delete temp;
    }
}

void tranverse(Node* &tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

int main(){
    Node* obj=new Node(4);
    Node* tail=obj;
    inserttail(tail,5);
    inserttail(tail,6);
    inserttail(tail,7);
    tranverse(obj);
    Node* head=NULL;
    deleteAtdata(tail,8,1);
    tranverse(obj);
}