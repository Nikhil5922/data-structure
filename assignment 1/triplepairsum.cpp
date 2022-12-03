#include<iostream>
#include<algorithm>
using namespace std;

void pairsum(int arr[],int n,int target){
    for(int i=0; i<n; i++){
    int first=i;
    int j=n-1;
    int newtarget=target-arr[first];
    while(i<j){
        if(arr[i]+arr[j]>newtarget){
        j--;
        }
        else if(arr[i]+arr[j]<newtarget){
        i++;
        }
        else{
            cout<<"the pair of "<<arr[i]<<" and "<<arr[j]<<" is equal to "<<newtarget<<endl;
            return;
        }
    }
        cout<<arr[i]<<"not equal to"<<arr[j]<<newtarget;
    }

}

int main(){
    int arr[]={3,1,4,5,9,13,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    pairsum(arr,n,33);
    return 0;

}