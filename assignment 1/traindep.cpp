#include<bits/stdc++.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n){
            // sort(arr,arr+n);
        	// sort(dep, dep+n);
        	int ans=0;
        	int m=0;
        	int i=0;
        	int j=0;
        	while(i<n && j<n){
        	  if(arr[i]<=arr[j]){
        	        i++;
        	        ans++;
        	    }
        	    else{
        	        i--;
        	        ans--;
        	    }
        	    m=max(m,ans);
        	}
        	return m;
}

int main(){
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
    int n=6;
    sort(arr,arr+n);
    sort(dep,dep+n);
    cout<<"out platform is"<<findPlatform(arr,dep,n);
    return 0;
}
