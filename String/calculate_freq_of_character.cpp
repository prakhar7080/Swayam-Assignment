#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(begin(s), end(s));
    char ch = s[0];
    int count = 1;
    for(int i=1;i<s.size();i++){
        if(s[i] == ch) count++;
        else{
            cout<<ch<<" : "<<count<<endl;
            count = 1;
            ch = s[i];
        }
    }
    cout<<ch<<" : "<<count<<endl;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     getline(cin, s);
//     map<char,int>mp;
//     for(char &ch : s){
//         mp[ch]++;
//     }
//     for(auto &element : mp){
//         if(element.first == ' ') continue;
//         cout<<element.first<<" : "<<element.second<<endl;
//     }
// }

