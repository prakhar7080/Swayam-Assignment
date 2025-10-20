#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    if(s.empty()){
        cout<<"String is empty";
        return 0;
    }
    int count = 0;
    string temp = "";
    for(int i=0;i<s.size();i++){
        if(s[i] == ' ' && !temp.empty()){
            count++;
            temp = "";
        }
        else if(s[i] != ' '){
            temp += s[i];
        }
    }
    if(!temp.empty()) count++;
    cout<<"No of words in string is : "<<count<<endl;
    return 0;
}
