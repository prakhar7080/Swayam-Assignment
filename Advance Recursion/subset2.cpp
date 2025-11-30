class Solution {
public:
    vector<vector<int>> ans;
    vector<int> curr;

    void solve(int idx, vector<int>& arr) {
        ans.push_back(curr);

        for (int i = idx; i < arr.size(); i++) {
            if (i > idx && arr[i] == arr[i - 1]) continue;

            curr.push_back(arr[i]);
            solve(i + 1, arr);
            curr.pop_back();
        }
    }

    vector<vector<int>> uniqueSubsets(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        solve(0, arr);
        return ans;
    }
};
