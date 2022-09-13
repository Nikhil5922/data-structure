#include<iostream>
using namespace std;

int minswap(int arr[],int s, int t){
    int count=0;
    for(int i=0; i<s; i++){
        if(arr[i]<=t){
            count++;
        }
    }
    int bad=0;
    for(int i=0; i<count; i++){
        if(arr[i]>t){
            bad++;
        }
    }
    int ans=bad;
    for(int i=0,j=count; j<s;j++,i++){
        if(arr[i]>t)
        bad--;
        if(arr[j]>t)
        bad++;
        ans=min(ans,bad);
    }
    return ans;

}

int main(){
    int arr[]={2,1,5,6,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<minswap(arr,n,3);


}