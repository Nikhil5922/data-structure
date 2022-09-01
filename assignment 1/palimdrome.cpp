#include<iostream>
using namespace std;
int palindrome(int arr[], int s){
    int a=0;
    int b=s-1;
    while(a<b){
        if(arr[a]==arr[b]){
            a++;
            b--;
        }
        else{
    return 0;}
    }
        return 1;
}

int main(){
    int arr[]={1,2,3,2,1};
    cout<<palindrome(arr,5)<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

}