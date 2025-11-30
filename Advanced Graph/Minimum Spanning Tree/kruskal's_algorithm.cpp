class Solution {
public:
    int find(int x, vector<int> &parent){
        if(x == parent[x]) return x;
        return parent[x] = find(parent[x], parent);
    }
    
    void Union(int u, int v, vector<int> &parent, vector<int> &rank){
        int pu = find(u, parent);
        int pv = find(v, parent);
        if(pu == pv) return;
        if(rank[pu] > rank[pv]) parent[pv] = pu;
        else if(rank[pu] < rank[pv]) parent[pu] = pv;
        else{
            parent[pu] = pv;
            rank[pv]++;
        }
    }
    
    int kruskalMST(int V, vector<vector<int>> &edges){
        sort(edges.begin(), edges.end(), [](vector<int> &a, vector<int> &b){
            return a[2] < b[2];
        });
        
        vector<int> parent(V), rank(V,0);
        for(int i=0; i<V; i++) parent[i] = i;
        
        int res = 0;
        for(auto &e : edges){
            int u = e[0], v = e[1], w = e[2];
            if(find(u, parent) != find(v, parent)){
                Union(u, v, parent, rank);
                res += w;
            }
        }
        return res;
    }
};
