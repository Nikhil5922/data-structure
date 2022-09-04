#include<iostream>
using namespace std;

void twosortarrayunion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            cout<<arr1[i++]<<" ";
        else if (arr2[j] < arr1[i])
            cout<<arr2[j++]<<" ";
        else {
            cout<<arr2[j++]<<" ";
            i++;
        }
    }
    while (i < m)
        cout<<arr1[i++]<<" ";
    while (j < n)
        cout<<arr2[j++]<<" ";
   cout<<endl;
}
void twosortarrayintersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
           i++;
        else if (arr2[j] < arr1[i])
            j++;
        else {
            cout<<arr2[j++]<<" ";
            i++;
        }
    }
}
int main(){
    int arr1[]={2,3,5,7,9};
    int arr2[]={3,4,5,6,7};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    cout<<"the union of two array is :";
    twosortarrayunion(arr1,arr2,n1,n2);
    cout<<"the intersection of two array is :";
    twosortarrayintersection(arr1,arr2,n1, n2);
    return 0;
}