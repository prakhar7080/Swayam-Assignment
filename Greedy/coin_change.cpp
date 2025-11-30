class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end(), greater<int>());
        
        int cnt = 0;
        for(int &c : coins){
            if(amount >= c){
                int k = amount / c;
                cnt += k;
                amount -= k * c;
            }
        }
        if(amount != 0) return -1;
        return cnt;
    }
};
