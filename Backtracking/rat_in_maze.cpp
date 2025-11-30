class Solution {
public:
    bool check(vector<vector<int>> &b, vector<int> &s, vector<int> &e) {
        unordered_set<long long> blk;
        for (auto &p : b) blk.insert(((long long)p[0] << 32) | p[1]);

        queue<pair<int,int>> q;
        unordered_set<long long> vis;

        q.push({s[0], s[1]});
        vis.insert(((long long)s[0] << 32) | s[1]);

        int d[4][2] = { {1,0}, {-1,0}, {0,1}, {0,-1} };
        int lim = b.size() * b.size();
        int cnt = 0;

        while (!q.empty() && cnt < lim) {
            auto [x, y] = q.front();
            q.pop();

            if (x == e[0] && y == e[1]) return true;

            for (auto &k : d) {
                int nx = x + k[0], ny = y + k[1];
                if (nx < 0 || ny < 0 || nx >= 1000000 || ny >= 1000000) continue;

                long long h = ((long long)nx << 32) | ny;
                if (!blk.count(h) && !vis.count(h)) {
                    vis.insert(h);
                    q.push({nx, ny});
                    cnt++;
                }
            }
        }
        return cnt >= lim;
    }

    bool isEscapePossible(vector<vector<int>>& b, vector<int>& s, vector<int>& e) {
        return check(b, s, e) && check(b, e, s);
    }
};
