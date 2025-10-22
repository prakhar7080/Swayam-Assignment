class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        sort(begin(nums),end(nums));
        int ans;
        int low = 1;
        int high = nums[nums.size()-1];
        while(low<=high){
            int mid = low + (high-low)/2;
            long long hr = 0;
            for(int i=0;i<nums.size();i++){
                hr += nums[i]/mid + (nums[i]%mid == 0 ? 0 : 1);
            }
            if(hr<=h){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};
