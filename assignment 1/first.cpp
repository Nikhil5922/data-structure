#include<iostream>
using namespace std;

int main(){
     int a=121;
     int store=0;
    //  int temp=123;
     while(a>0){
        int r;
        r=a%10;
        a=a/10;
        store=(store*10)+r;
        cout<<a<<" ";
     }
     if(store==121){
        cout<<"this is palindrome ";
     }
     else{
        cout<<"otherwise this is not palindrome";
     }
   
}