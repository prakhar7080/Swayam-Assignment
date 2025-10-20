#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int>&arr){
    for(int i=1;i<arr.size();i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
int main(){
    int n;
    cout<<"Enter number of elements in array : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion_sort(arr);
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
