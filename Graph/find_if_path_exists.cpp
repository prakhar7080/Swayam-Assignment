class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<vector<int>> adj(n);
        for(auto &e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        vector<bool> visited(n, false);
        queue<int> q;
        q.push(start);
        visited[start] = true;
        
        while(!q.empty()){
            int f = q.front();
            q.pop();
            if(f == end) return true;
            for(int &k : adj[f]){
                if(!visited[k]){
                    visited[k] = true;
                    q.push(k);
                }
            }
        }
        return false;
    }
};
