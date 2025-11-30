class GraphDFS {
public:
    vector<vector<int>> adj;
    int n;
    
    GraphDFS(int n){
        this->n = n;
        adj.resize(n);
    }
    
    void addEdge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    void DFSUtil(int u, vector<bool> &visited){
        visited[u] = true;
        cout << u << " ";
        for(int &k : adj[u]){
            if(!visited[k]){
                DFSUtil(k, visited);
            }
        }
    }
    
    void DFS(int start){
        vector<bool> visited(n, false);
        DFSUtil(start, visited);
    }
};
