#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int>&arr, int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i] == target) return i;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter number of element : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target element : ";
    cin>>target;
    int index = linearSearch(arr, target);
    if(index == -1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at "<<index<<" index";
    }
}
