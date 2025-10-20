#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        int mini = i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        if(mini != i){
            swap(arr[i], arr[mini]);
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
    selection_sort(arr);
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
