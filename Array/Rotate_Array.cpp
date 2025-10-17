class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k %= size;
        int n = size-k;
        int start = 0;
        while(start < n) start++;
        vector<int>temp;
        for(start;start<size;start++){
            temp.push_back(nums[start]);
        }
        start = 0;
        while(start<n){
            temp.push_back(nums[start]);
            start++;
        }
        nums = temp;
    }
};
