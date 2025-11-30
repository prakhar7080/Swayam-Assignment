class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        vector<int> right(n);
        
        right[n-1] = arr[n-1];
        for(int i=n-2; i>=0; i--){
            right[i] = min(right[i+1], arr[i]);
        }
        
        int count = 1;
        int mx = arr[0];
        
        for(int i=0; i<n-1; i++){
            mx = max(mx, arr[i]);
            if(mx <= right[i+1]) count++;
        }
        return count;
    }
};
