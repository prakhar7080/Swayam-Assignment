class Solution {
public:
    void DFS(int u, vector<vector<int>> &adj, vector<bool> &visited){
        visited[u] = true;
        for(int &v : adj[u]){
            if(!visited[v]){
                DFS(v, adj, visited);
            }
        }
    }
    
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto &e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        vector<bool> visited(n, false);
        int count = 0;
        for(int i=0; i<n; i++){
            if(!visited[i]){
                DFS(i, adj, visited);
                count++;
            }
        }
        return count;
    }
};
