#include<iostream>
using namespace std;
int target(int arr[3][3], int n , int target){
    int maxi=INT_MIN;
    int m=0;
    for(int i=0; i<n; i++){
    int sum=0;
        for(int j=0; j<n; j++){
                sum=sum+arr[j][i];
        }
        // cout<<sum<<" ";
        if(sum==target){
            return true;
        }
    }
    cout<<endl;
    return false;
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        for(int j=0; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<target(arr,n,15);
}