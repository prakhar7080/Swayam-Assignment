class Solution {
public:
    void go(int i, int n, int k, vector<int>&cur, vector<vector<int>>&ans){
        if(cur.size() == k){
            ans.push_back(cur);
            return;
        }
        if(i > n) return;

        cur.push_back(i);
        go(i+1,n,k,cur,ans);
        cur.pop_back();

        go(i+1,n,k,cur,ans);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> cur;
        go(1,n,k,cur,ans);
        return ans;
    }
};
