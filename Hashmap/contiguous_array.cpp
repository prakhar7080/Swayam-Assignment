class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int currSum = 0;
        int index = -1;
        int ans = 0;
        if(currSum == 0) mp[currSum] = index;
        for(index = 0; index<nums.size(); index++){
            if(nums[index] == 0) currSum -= 1;
            else if(nums[index] == 1) currSum += 1;

            if(mp.count(currSum) == 0){
                mp[currSum] = index;
            }
            else{
                ans = max(ans, index-mp[currSum]);
            }
        }
        return ans;
    }
};
