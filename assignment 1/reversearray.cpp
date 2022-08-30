#include<iostream>
using namespace std;
void reversearray(int arr[], int size){
    int a=0;
    int b=size-1;
    while(a<b){
        swap(arr[a],arr[b]);
        a++;
        b--;
    }
}
int main()
 {
    int t;
	cin>>t;
	for(int a=0;a<t;a++){
	    int n;
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
     reversearray(arr,n);
     for(int i=0; i<n; i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
    }
    return 0;

}