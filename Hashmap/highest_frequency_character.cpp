class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        unordered_map<char, int>mp;
        for(char ch : s) mp[ch]++;
        
        int maxi = 0;
        char ans = '~';
        for(auto [ch, freq] : mp){
            if(freq > maxi || (freq == maxi && ch < ans)){
                maxi = freq;
                ans = ch;
            }
        }
        return ans;
    }
};
