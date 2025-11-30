class GraphBFS {
public:
    vector<vector<int>> adj;
    int n;
    
    GraphBFS(int n){
        this->n = n;
        adj.resize(n);
    }
    
    void addEdge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    void BFS(int start){
        vector<bool> visited(n, false);
        queue<int> q;
        visited[start] = true;
        q.push(start);
        
        while(!q.empty()){
            int f = q.front();
            q.pop();
            cout << f << " ";
            for(int &k : adj[f]){
                if(!visited[k]){
                    visited[k] = true;
                    q.push(k);
                }
            }
        }
    }
};
