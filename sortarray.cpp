#include<iostream>
using namespace std;
int sortarray(int arr[],int n){
    int zero=0,one=0,two=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;
        }
        else{
            two++;
        }
    }
    int i=0;
    while(zero!=0){
        arr[i]=0;
        cout<<arr[i];
        zero--;
    }
    while(one--){
        arr[i]=1;
        cout<<arr[i];
    }
    while(two--){
        arr[i]=2;
        cout<<arr[i];
    }
    return 0;
}

int main(){
    int arr[]={0,1,0,2,1,2,2,1,0};
    sortarray(arr,9);


}