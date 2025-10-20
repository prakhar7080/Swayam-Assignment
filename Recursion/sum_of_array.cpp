// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
    int helper(vector<int>&arr, int index){
        if(index >= arr.size()) return 0;
        return arr[index] + helper(arr, index+1);
    }
    int arraySum(vector<int>& arr) {
        return helper(arr, 0);
    }
};
