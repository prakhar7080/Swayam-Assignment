#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>&arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int mid;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
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
    int index = binarySearch(arr, target);
    if(index == -1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at "<<index<<" index";
    }
}
