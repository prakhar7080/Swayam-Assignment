class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = INT_MIN;
        int left = 0;
        unordered_map<char,int>map;
        for(int right=0;right<s.size();right++){
            char ch = s[right];
            map[ch]++;
            while(map[ch]>1){
                map[s[left]]--;
                left++;
            }
            ans = max(ans,right-left+1);
        }
        if(ans == INT_MIN) return 0;
        return ans;
    }
};
