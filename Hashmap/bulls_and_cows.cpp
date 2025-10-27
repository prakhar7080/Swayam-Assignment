class Solution {
public:
    string getHint(string secret, string guess) {
        int x = 0;
        for(int i=0;i<secret.size();i++){
            if(secret[i] == guess[i]) x++;
        }
        int y = 0;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(char ch : secret){
            mp1[ch]++;
        }
        for(char ch : guess){
            mp2[ch]++;
        }
        for(auto ele : mp1){
            y += min(ele.second, mp2[ele.first]);
        }
        y -= x;
        return to_string(x) + "A" + to_string(y) + "B";
    }
};
