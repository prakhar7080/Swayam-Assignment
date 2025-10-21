class Solution {
public:
    int helper(vector<int>&nums, int left, int right, int index){
        if(index >= nums.size()) return -1;
        left += nums[index];
        if(left == right) return index;
        right -= nums[index];
        return helper(nums, left, right, index+1);
    }
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for(int n:nums){
            total += n;
        }
        return helper(nums, 0, total, 0);
    }
};
