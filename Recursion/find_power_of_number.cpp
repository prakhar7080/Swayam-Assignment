#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str = to_string(n);
    reverse(begin(str), end(str));
    int rev = stoi(str);
    long long ans =  pow(n, rev);
    cout<<ans<<endl;
}
