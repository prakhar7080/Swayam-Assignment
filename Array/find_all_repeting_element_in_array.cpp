#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>mp;
    for(int &n:arr){
        mp[n]++;
    }
    for(auto &n:mp){
        if(n.second > 1) cout<<n.first<<" ";
    }
}
