class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int>st;
        for(int n : nums){
            st.insert(n);
        }
        for(int i=0;i<=nums.size();i++){
            if(st.find(i) == st.end()) return i;
        }
        return 0;
    }
};
