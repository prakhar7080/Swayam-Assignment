class Solution {
public:
    void go(int i, vector<int> &a, int t, vector<int>&cur, vector<vector<int>>&ans){
        if(t == 0){
            ans.push_back(cur);
            return;
        }
        if(i == a.size() || t < 0) return;

        cur.push_back(a[i]);
        go(i,a,t-a[i],cur,ans);
        cur.pop_back();

        go(i+1,a,t,cur,ans);
    }

    vector<vector<int>> combinationSum(vector<int>& a, int t) {
        vector<vector<int>> ans;
        vector<int> cur;
        go(0,a,t,cur,ans);
        return ans;
    }
};
