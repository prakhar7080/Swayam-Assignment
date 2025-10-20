#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int>&arr){
    for(int i=0;i<arr.size()-1;i++){
        for(int j=0; j<arr.size()-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
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
    bubble_sort(arr);
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
