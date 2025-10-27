class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>mp1;
        unordered_map<char, int>mp2;
        for(char ch : s) mp1[ch]++;
        for(char ch : t) mp2[ch]++;
        for(char ch : s){
            if(mp1[ch] != mp2[ch]) return false;
        }
        for(char ch : t){
            if(mp1[ch] != mp2[ch]) return false;
        }
        return true;
    }
};
