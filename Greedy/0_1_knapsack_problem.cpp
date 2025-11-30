class Solution {
public:
    int knapSack(int W, int wt[], int val[], int n) {
        vector<vector<int>> dp(n+1, vector<int>(W+1, 0));
        
        for(int i=1; i<=n; i++){
            for(int w=0; w<=W; w++){
                int take = 0;
                if(wt[i-1] <= w){
                    take = val[i-1] + dp[i-1][w-wt[i-1]];
                }
                int not_take = dp[i-1][w];
                dp[i][w] = max(take, not_take);
            }
        }
        return dp[n][W];
    }
};
