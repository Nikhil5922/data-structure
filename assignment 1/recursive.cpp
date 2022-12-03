#include<iostream>
using namespace std;

int main(){
    int arr[7]={4,2,6,9,12,0,14};
    int n=7;
    int ans=0;
    for(int i=0; i<n; i++){
        ans=max(ans,arr[i]);
    }
    cout<<ans<<endl;
    return 0;
}