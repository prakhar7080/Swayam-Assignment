#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    if(s.empty()){
        cout<<"String is empty";
        return 0;
    }
    string str = "";
    unordered_set<char>st;
    for(char ch : s){
        if(ch != ' ' && st.find(ch) == st.end()){
            str += ch;
            st.insert(ch);
        }
    }
    cout<<str<<endl;
}
