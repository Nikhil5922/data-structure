#include<iostream>
using namespace std;

int findmaxno(int arr[],int n , int index){
    if(n==index){
        return INT_MIN;
    }
    int maxi=arr[index];
    int ans=findmaxno(arr,n,index+1);
    return max(maxi,ans);
}

int main(){
    int arr[]={4,2,6,9,1,0,12};
    int n=7;
    cout<<findmaxno(arr,n,0);
}