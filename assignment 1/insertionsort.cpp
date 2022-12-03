#include<iostream>
using namespace std;

void insert(int arr[], int i)
    {
        //code here
        for(int k=1; k<i; k++){
            int sort=arr[k];
            int j=k-1;
            for(; j>=0; j--){
                if(arr[j]>sort){
                    arr[j+1]=arr[j];
                }
                else
                break;
            }
            
            arr[j+1]=sort;
        }
    }

int main(){
    int arr[]={4,1,3,9,7};
    int n=5;
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;
    insert(arr,n);

     for(int i=0; i<n; i++){
        cout<<arr[i];
    }


}