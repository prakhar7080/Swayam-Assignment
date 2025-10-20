class Solution {
  public:
    void helper(int i, int n){
        if(i > n) return;
        cout<<i<<" ";
        helper(i+1, n);
    }
    void printTillN(int n) {
        helper(1,n);
    }
};
