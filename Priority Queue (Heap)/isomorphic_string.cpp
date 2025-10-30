class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        unordered_map<char, char>mp;
        unordered_map<char, bool>check;
        for(int i=0;i<n;i++){
            if(mp.find(s[i]) == mp.end() && check[t[i]] == false){
                mp[s[i]] = t[i];
                check[t[i]] = true;
            }
            else{
                if(mp[s[i]] != t[i]) return false;
            }
        }
        return true;
    }
};
