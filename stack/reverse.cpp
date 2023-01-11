#include<iostream>
#include<stack>
using namespace std;

void insertatbuttom(stack<int>&st, int item){
    if(st.empty()){
        st.push(item);
        return;
    }
    int topelement=st.top();
    st.pop();
    insertatbuttom(st,item);
    st.push(topelement);
    }
void reverse(stack<int>&st){
    if(st.empty()){
        return;
    }
    int topelement=st.top();
    st.pop();
    reverse(st);
    insertatbuttom(st,topelement);
}

int main(){
    stack<int> st;
    st.push(3);
    st.push(6);
    st.push(8);
    st.push(5);
    st.push(1);
    st.push(18);
    insertatbuttom(st,15);
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}