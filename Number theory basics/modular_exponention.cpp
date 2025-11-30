class Solution {
public:
    int modPow(int a, int k, int mod) {
        long long res = 1;
        long long x = a % mod;

        while (k > 0) {
            if (k & 1)
                res = (res * x) % mod;
            x = (x * x) % mod;
            k >>= 1;
        }
        return res;
    }

    int superPow(int a, vector<int>& b) {
        int mod = 1337;
        a %= mod;
        int result = 1;

        for (int digit : b) {
            result = modPow(result, 10, mod);
            result = (result * modPow(a, digit, mod)) % mod;
        }

        return result;
    }
};
