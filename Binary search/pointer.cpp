#include<iostream>
using namespace std;

// void func1( int** q){
//     q=q+1;
// }

// void func2(int** q){
//     *q=*q+1;

// }
// void func3(int** q){
//     **q=**q+1;
// }

int main(){
// int a=5;
// int* p=&a;
// int** q=&p;
// cout<<"before-> "<<q<<endl;
// cout<<"before-> "<<*q<<endl;
// cout<<"before-> "<<**q<<endl;
// func3(q);
// cout<<"after"<<q<<endl;
// cout<<"after"<<*q<<endl;
// cout<<"after"<<**q<<endl;
// char ch='a';
// char *ptr=&ch;
// ch++;
// cout<<*ptr;
int a[]={1,2,3,4};
int *p=a+1;
cout<<*p+4<<endl;
return 0;
}