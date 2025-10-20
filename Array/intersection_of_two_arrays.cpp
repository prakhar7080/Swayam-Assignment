class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(begin(nums1), end(nums1));
        sort(begin(nums2), end(nums2));
        int i = 0;
        int j = 0;
        set<int>st;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] == nums2[j] && st.find(nums1[i]) == st.end()){
                st.insert(nums1[i]);
            }
            else if(nums1[i] < nums2[j]) i++;
            else j++;
        }
        vector<int>ans;
        for(auto &n:st){
            ans.push_back(n);
        }
        return ans;
    }
};
