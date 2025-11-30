class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        int fact = 1;
        for (int i = 2; i <= n; i++) fact *= i;

        for (int k = 0; k < fact; k++) {
            int temp = k;
            vector<int> v = nums;
            vector<int> perm;

            for (int div = n; div >= 1; div--) {
                int idx = temp % div;
                temp /= div;

                perm.push_back(v[idx]);
                v.erase(v.begin() + idx);
            }

            ans.push_back(perm);
        }

        return ans;
    }
};
