class Solution {
public:
    int n;
    vector<vector<int>> a, path;
    vector<vector<int>> ans;

    void go(int x, int y) {
        if (x == n-1 && y == n-1) {
            vector<int> v;
            for (auto &r : path) for (int c : r) v.push_back(c);
            ans.push_back(v);
            return;
        }

        int d[4][2] = { {1,0}, {0,-1}, {0,1}, {-1,0} };

        for (auto &k : d) {
            int nx = x + k[0], ny = y + k[1];
            if (nx >= 0 && ny >= 0 && nx < n && ny < n && a[nx][ny] == 1 && path[nx][ny] == 0) {
                path[nx][ny] = 1;
                go(nx, ny);
                path[nx][ny] = 0;
            }
        }
    }

    vector<vector<int>> solve(vector<vector<int>> &v) {
        a = v;
        n = a.size();
        path.assign(n, vector<int>(n, 0));
        path[0][0] = 1;
        go(0, 0);
        return ans;
    }
};
