class Solution {
public:
    int longestConsecutive(vector<int>& nums){
        if(nums.empty()) return 0;
        int ans = 0;
        map<int,int>map;
        for(int n:nums){
            map[n]++;
        }
        nums.clear();
        for(auto &n:map){
            nums.push_back(n.first);
        }
        int count = 0;
        int n = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i] == n){
                count++;
                n++;
            }
            else{
                ans = max(ans,count);
                count=0;
                n = nums[i];
                i--;
            }
        }
        ans = max(ans,count);
        return ans;
    }
};
