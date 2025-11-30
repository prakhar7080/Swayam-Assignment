class Solution {
public:
    void DFS(int u, int n, vector<vector<int>> &adj, vector<int> &path, vector<vector<int>> &res){
        path.push_back(u);
        if(u == n-1){
            res.push_back(path);
        }
        else{
            for(int &k : adj[u]){
                DFS(k, n, adj, path, res);
            }
        }
        path.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>> adj(n);
        for(int i=0; i<n; i++){
            adj[i] = graph[i];
        }
        vector<vector<int>> res;
        vector<int> path;
        DFS(0, n, adj, path, res);
        return res;
    }
};
