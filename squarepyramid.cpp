#include<iostream>
using namespace std;
int main(){
    int n=9;
    for(int row=1; row<=n ; row++){
        if(row==1 || row==n){
            for(int row=1 ; row<=n; row++)
            cout<<"5";
        }
        else{
            cout<<"5";
            for(int col=1; col<=n-2; col++){
                cout<<" ";

            }
            cout<<"5";
        }
        cout<<endl;
    }
}