#include<iostream>
using namespace std;
void swap(int arr[],int s){
    int i=0;
    while(i<s){
        if(i+1<s){
        swap(arr[i],arr[i+1]);}

        i=i+2; 
    }
}

int main(){
    int arr[]={2,7,5,6,9,8};

for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
     swap(arr,6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}