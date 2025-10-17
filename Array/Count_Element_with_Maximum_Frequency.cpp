class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxi = INT_MIN;
        for(int &n:nums){
            mp[n]++;
            maxi = max(maxi, mp[n]);
        }
        int count = 0;
        for(auto &n:mp){
            if(n.second == maxi) count += n.second;
        }
        return count;
    }
};
