class Solution {
  public:
    int maxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int currSum = 0;
        int index = -1;
        int ans = 0;
        mp[0] = -1;
        for(index = 0; index<nums.size(); index++){
            currSum += nums[index];

            if(mp.find(currSum) == mp.end()){
                mp[currSum] = index;
            }
            else{
                ans = max(ans, index-mp[currSum]);
            }
        }
        return ans;
    }
};
