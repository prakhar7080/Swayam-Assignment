class Solution {
public:
    int primMST(int V, vector<vector<pair<int,int>>> &adj){
        vector<int> key(V, 1e9);
        vector<bool> inMST(V, false);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
        key[0] = 0;
        pq.push({0, 0}); // {weight, vertex}
        int res = 0;
        
        while(!pq.empty()){
            int u = pq.top().second;
            int w = pq.top().first;
            pq.pop();
            
            if(inMST[u]) continue;
            inMST[u] = true;
            res += w;
            
            for(auto &p : adj[u]){
                int v = p.first;
                int wt = p.second;
                if(!inMST[v] && wt < key[v]){
                    key[v] = wt;
                    pq.push({key[v], v});
                }
            }
        }
        return res;
    }
};
