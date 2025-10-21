class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = INT_MIN;
        int left = 0;
        int right = n-1;
        while(left<right){
            ans = max(ans, (right-left)*min(height[left],height[right]));
            height[left]<height[right] ? left++ : right--;
        }
        return ans;
    }
};
