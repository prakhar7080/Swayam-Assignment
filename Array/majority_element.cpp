class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = nums.size()/2;
        unordered_map<int,int>map;
        for(int n:nums){
            map[n]++;
            if(map[n]>majority) return n;
        }
        return -1;
    }
};
