class Solution {
public:
    void go(int i, vector<int>&a, int t, vector<int>&cur, vector<vector<int>>&ans){
        if(t == 0){
            ans.push_back(cur);
            return;
        }
        if(i == a.size() || t < 0) return;

        for(int j=i;j<a.size();j++){
            if(j > i && a[j] == a[j-1]) continue;
            if(a[j] > t) break;
            cur.push_back(a[j]);
            go(j+1,a,t-a[j],cur,ans);
            cur.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& a, int t) {
        sort(a.begin(), a.end());
        vector<vector<int>> ans;
        vector<int> cur;
        go(0,a,t,cur,ans);
        return ans;
    }
};
