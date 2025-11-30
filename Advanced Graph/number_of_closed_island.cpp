class Solution {
public:
    void DFS(int i, int j, vector<vector<int>> &grid){
        int m = grid.size();
        int n = grid[0].size();
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j] != 0) return;
        grid[i][j] = 1;
        DFS(i+1, j, grid);
        DFS(i-1, j, grid);
        DFS(i, j+1, grid);
        DFS(i, j-1, grid);
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        for(int i=0; i<m; i++){
            DFS(i, 0, grid);
            DFS(i, n-1, grid);
        }
        for(int j=0; j<n; j++){
            DFS(0, j, grid);
            DFS(m-1, j, grid);
        }
        
        int count = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 0){
                    DFS(i, j, grid);
                    count++;
                }
            }
        }
        return count;
    }
};
