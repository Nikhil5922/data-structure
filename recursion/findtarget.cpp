#include<iostream>
using namespace std;

bool findtarget(int arr[],int n, int target ){
    if(arr[n-1]==target){
        return true;
    }
    if(n<0){
        return false;
    }

        return findtarget(arr,n-1, target);
}

int main(){
    int arr[]={4,2,6,9,1,0,12};
    int n=7;
    int target=9;
    cout<<findtarget(arr,n,target);
}