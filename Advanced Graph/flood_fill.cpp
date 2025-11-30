class Solution {
public:
    void DFS(int i, int j, vector<vector<int>> &image, int newColor, int oldColor){
        int m = image.size();
        int n = image[0].size();
        if(i<0 || j<0 || i>=m || j>=n || image[i][j] != oldColor) return;
        image[i][j] = newColor;
        DFS(i+1, j, image, newColor, oldColor);
        DFS(i-1, j, image, newColor, oldColor);
        DFS(i, j+1, image, newColor, oldColor);
        DFS(i, j-1, image, newColor, oldColor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor = image[sr][sc];
        if(oldColor != newColor)
            DFS(sr, sc, image, newColor, oldColor);
        return image;
    }
};
