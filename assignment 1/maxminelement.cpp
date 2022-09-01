#include<iostream>
using namespace std;

int getmax(int arr[],int a){
    int maxi=INT_MIN;
    for(int i=0; i<a; i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int getmin(int arr[],int a){
    int mini=INT_MAX;
    for(int i=0; i<a; i++){
        mini=min(mini,arr[i]);
    }
    return mini;
}

int main(){
    int arr[]={3,12,7,18,17,16};
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"the maximum array is :"<<getmax(arr,6)<<endl;
    cout<<"the minimum array is :"<<getmin(arr,6)<<endl;
    return 0;
}