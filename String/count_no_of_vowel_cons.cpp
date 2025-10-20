#include<bits/stdc++.h>
using namespace std;
bool isvowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
    return false;
}
bool isconsonent(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) return true;
    return false;
}
void solve(string s, int &vowel, int &cons, int &white){
    for(char ch : s){
        if(ch == ' ') white++;
        else if(isvowel(ch)) vowel++;
        else if(isconsonent(ch)) cons++;
    }
}
int main(){
    string s;
    getline(cin, s);
    int vowel = 0;
    int cons = 0;
    int white = 0;
    solve(s, vowel, cons, white);
    cout<<"No of vowel = "<<vowel<<endl;
    cout<<"No of consonenet = "<<cons<<endl;
    cout<<"No of white spaces = "<<white<<endl;
}
