class Solution {
public:
    int lowerBound(vector<int>&nums,int target){
        int i=0;
        int j=nums.size()-1;
        int ans = nums.size();
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid]>=target){
                ans = mid;
                j = mid-1;
            }
            else{
                i = mid+1;
            }
        }
        return ans;
    }
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxi = 0;
        int index = 0;
        for(int i=0;i<mat.size();i++){
            sort(begin(mat[i]),end(mat[i]));
            int lb = lowerBound(mat[i],1);
            int count = mat[0].size()-lb;
            if(count>maxi){
                maxi = count;
                index = i;
            }
        }
        return {index,maxi};
    }
};
