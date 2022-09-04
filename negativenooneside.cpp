#include<iostream>
using namespace std;
void shiftIntegers(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[j], arr[i]);
            j++;
        }
    }
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[] = { 2,4,-10,13,-7,-60,52,8,-19 };
   int n=sizeof(arr)/sizeof(arr[0]);
    shiftIntegers(arr, n);
    return 0;
}