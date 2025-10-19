class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st;
        for(int &n:nums){
            st.insert(n);
        }
        int index = 0;
        for(auto &n:st){
            nums[index++] = n;
        }
        return st.size();
    }
};
