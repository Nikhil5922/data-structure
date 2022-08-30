#include<iostream>
using namespace std;

int fact(int s){
    int fact=1;
    for(int i=1; i<=s; i++){
        fact=fact * i;
    }
    return fact;
}

int main(){
    int k=12,j;
    j=fact(k);
    cout<<"the factorial is "<<j<<endl;
    return 0;
}