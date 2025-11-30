class Solution {
public:
    int knapSack(int W, int wt[], int val[], int n) {
        vector<pair<double,int>> v;
        
        for(int i=0; i<n; i++){
            double r = (double)val[i] / wt[i];
            v.push_back({r, i});
        }
        
        sort(v.begin(), v.end(), greater<pair<double,int>>());
        
        int total = 0;
        for(auto &p : v){
            int idx = p.second;
            if(wt[idx] <= W){
                total += val[idx];
                W -= wt[idx];
            }
        }
        return total;
    }
};
