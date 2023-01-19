#include<iostream>
using namespace std;

void counting(int n){
    if(n<1){
        return;
    }
    counting(n-1);
    cout<<n<<" ";
}

int main(){
    cout<<"enter a number"<<endl;
    int n;
    cin>>n;
    counting(n);

}