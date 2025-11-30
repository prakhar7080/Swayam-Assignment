class Solution {
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        unordered_map<int, vector<int>> adj;
        for(auto &e : edges){
            adj[e[0]].push_back(e[1]);
        }
        int result = 0;
        queue<int>q;
        vector<int> inDegree(V, 0);
        for(int i=0; i<V; i++){
            for(auto &e : adj[i]){
                inDegree[e]++;
            }
        }
        
        for(int i=0; i<V; i++){
            if(inDegree[i] == 0) q.push(i);
        }
        
        while(!q.empty()){
            int f = q.front();
            q.pop();
            result++;
            
            for(auto &v : adj[f]){
                inDegree[v]--;
                if(inDegree[v] == 0) q.push(v);
            }
        }
        
        if(result != V) return true;
        return false;
    }
};
