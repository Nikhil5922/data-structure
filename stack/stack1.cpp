#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        arr=new int[size];
        top=-1;
        this->size=size;
    }
    void push(int data){
        top++;
        arr[top]=data;
    }
    void Pop(){
        top--;
    }
    int getsize(){
        return this->top+1;
    }
};

int main(){
    Stack* st= new Stack(5);
    st->push(5);
    st->push(6);
    st->push(3);
    st->push(1);
    st->push(2);
    st->push(7);
    cout<<st->getsize()<<endl;

    // stack<int> st;
    // st.push(5);
    // st.push(4);
    // st.push(3);
    // st.push(2);
    // st.push(1);
    // while(!st.empty()){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
    return 0;

}