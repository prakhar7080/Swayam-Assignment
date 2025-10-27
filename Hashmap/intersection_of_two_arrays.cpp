class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>map1;
        unordered_map<int,int>map2;
        for(int n : nums1){
            map1[n]++;
        }
        for(int n : nums2){
            map2[n]++;
        }
        for(auto &n : map1){
            if(map2[n.first]>0) ans.push_back(n.first);
        }
        return ans;
    }
};
