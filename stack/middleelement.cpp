#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int> &st , int Totalsize){
    if(Totalsize/2 +1 ==st.size()){
        cout<<"Middle is "<<st.top();
        return;
    }

    int topelement=st.top();
    st.pop();

    printMiddle(st,Totalsize);

    st.push(topelement);
}

int main(){
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    printMiddle(st,st.size());
        cout<<endl;
    while(!st.empty()){ 
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;

    
}