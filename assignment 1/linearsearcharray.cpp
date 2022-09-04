#include<iostream>
using namespace std;
int target(int arr[],int size, int target){
    int N=0;
    for(int i=0; i<size; i++){
        if(arr[i]==target)
            return 0;
        
    }
    return -1; 
    
}

int main(){
    int arr[]={3,6,7,12,2,4,6};
    target(arr,7,4);
     for(int j=0 ; j<7; j++){
         cout<<arr[j];
    }
    if(target(arr,7,4)){
        cout<<"element found"<<endl;
    }
    else
    cout<<"element not found"<<endl;

}