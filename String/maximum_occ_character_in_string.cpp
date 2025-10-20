#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ans = s[0];
    int maxi = INT_MIN;
    char ch = s[0];
    int count = 1;
    for(int i=1;i<s.size();i++){
        if(s[i] == ch){
            count++;
            if(count > maxi){
                maxi = count;
                ans = s[i];
            }
        }
        else{
            ch = s[i];
            count = 1;
        }
    }
    cout<<char(ans);
}
