class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        unordered_map<int,int>mp;
        //Sum --> Count
        mp[0] = 1;
        int currSum = 0;
        int ans = 0;
        for(int i=0;i<arr.size();i++){
            currSum += arr[i];
            if(mp.find(currSum) != mp.end()){
                ans += mp[currSum];
            }
            mp[currSum]++;
        }
        return ans;
    }
};
