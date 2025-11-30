class Solution {
public:
    int modPow(long long a, long long b, int mod) {
        long long r = 1;
        a %= mod;
        while (b) {
            if (b & 1) r = r * a % mod;
            a = a * a % mod;
            b >>= 1;
        }
        return r;
    }

    int modFromDigits(const vector<int>& b, int mod) {
        long long r = 0;
        for (int d : b) r = (r * 10 + d) % mod;
        return r;
    }

    long long modInv(long long a, long long m) {
        long long r0 = a, r1 = m, s0 = 1, s1 = 0;
        while (r1) {
            long long q = r0 / r1;
            long long r2 = r0 - q * r1; r0 = r1; r1 = r2;
            long long s2 = s0 - q * s1; s0 = s1; s1 = s2;
        }
        if (s0 < 0) s0 += m;
        return s0;
    }

    int superPow(int a, vector<int>& b) {
        int m1 = 7, m2 = 191;
        int phi1 = 6, phi2 = 190;

        int e1 = modFromDigits(b, phi1);
        int e2 = modFromDigits(b, phi2);

        int r1 = modPow(a, e1, m1);
        int r2 = modPow(a, e2, m2);

        long long M = 1LL * m1 * m2;
        long long M1 = m2, M2 = m1;

        long long inv1 = modInv(M1 % m1, m1);
        long long inv2 = modInv(M2 % m2, m2);

        long long x = (r1 * M1 % M * inv1 % M + r2 * M2 % M * inv2 % M) % M;

        return (int)x;
    }
};
