#include<iostream>
using namespace std;
int sqr(int s);

int main(){
    int n=2;
    sqr(n);
    return 0;
}
int sqr(int s){
    int sqr;
    for(int j=s ; j<=6; j++){
    sqr=j*j;
    cout<<"the sqr " <<j<<" is "<<sqr<<endl;
    }
    return 0;
}