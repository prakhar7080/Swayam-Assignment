class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (s.size() < p.size()) return {};

        unordered_map<char,int> need, window;
        for (char c : p) need[c]++;

        int required = need.size();
        int formed = 0;
        int l = 0, r = 0;
        vector<int> ans;

        while (r < s.size()) {
            char c = s[r];
            window[c]++;

            if (need.count(c) && window[c] == need[c])
                formed++;

            while (r - l + 1 >= p.size()) {
                if (formed == required)
                    ans.push_back(l);

                char left = s[l];
                if (need.count(left) && window[left] == need[left])
                    formed--;

                window[left]--;
                l++;
            }
            r++;
        }
        return ans;
    }
};
