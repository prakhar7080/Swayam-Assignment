class Solution {
  public:
    void helper(int n, string str, int i, int &count){
        if(i>=str.size()) return;
        int num = str[i] - '0';
        if(num != 0 && n % num == 0) count++;
        helper(n, str, i+1, count);
    }
    int evenlyDivides(int n) {
        int count = 0;
        string str = to_string(n);
        helper(n, str, 0, count);
        return count;
    }
};
