#include<iostream>
using namespace std;

void count(int n){
    if(n<0){
    return ;}
    count(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    // cout<<"the count is"<<count(n)<<endl;
    count(n);
    return 0;
}