class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int left = 0;
        int right = arr.size()-1;
        int mid;
        int ans = arr.size();
        while(left <= right){
            mid = left + (right-left)/2;
            if(arr[mid] >= target){
                ans = mid;
                right = mid-1;
            }
            else if(arr[mid] < target){
                left = mid+1;
            }
        }
        return ans;
    }
};
