class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int m = f.size();
        
        for(int i=0; i<m; i++){
            if(f[i] == 0){
                int left = (i == 0 || f[i-1] == 0);
                int right = (i == m-1 || f[i+1] == 0);
                
                if(left && right){
                    f[i] = 1;
                    n--;
                }
            }
        }
        return n <= 0;
    }
};
