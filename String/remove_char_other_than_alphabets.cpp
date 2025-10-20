#include<bits/stdc++.h>
using namespace std;
string solve(string s){
    string result;
    for(char ch : s){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) result.push_back(ch);
    }
    return result;
}
int main(){
    string s;
    getline(cin, s);
    s = solve(s);
    cout<<s<<endl;
}
