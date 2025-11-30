class Solution {
public:
    void DFS(int u, vector<vector<int>> &adj, vector<bool> &visited){
        visited[u] = true;
        for(int v=0; v<adj.size(); v++){
            if(adj[u][v] == 1 && !visited[v]){
                DFS(v, adj, visited);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n, false);
        int count = 0;
        for(int i=0; i<n; i++){
            if(!visited[i]){
                DFS(i, isConnected, visited);
                count++;
            }
        }
        return count;
    }
};
