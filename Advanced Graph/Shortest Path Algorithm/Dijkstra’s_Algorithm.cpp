class Solution {
public:
    vector<int> dijkstra(int V, vector<vector<pair<int,int>>> &adj, int src){
        vector<int> dist(V, 1e9);
        dist[src] = 0;
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0, src});
        
        while(!pq.empty()){
            int u = pq.top().second;
            int d = pq.top().first;
            pq.pop();
            
            if(d > dist[u]) continue;
            
            for(auto &p : adj[u]){
                int v = p.first;
                int w = p.second;
                if(dist[u] + w < dist[v]){
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }
        return dist;
    }
};
