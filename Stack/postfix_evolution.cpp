#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evaluatePostfix(vector<string>& arr) {
        stack<int> st;

        for (const string &s : arr) {
            if (s == "+" || s == "-" || s == "*" || s == "/" || s == "^") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                
                if (s == "+") st.push(a + b);
                else if (s == "-") st.push(a - b);
                else if (s == "*") st.push(a * b);
                else if (s == "/") {
                    int res = a / b;
                    if (a % b != 0 && ((a < 0) != (b < 0))) res--;
                    st.push(res);
                }
                else if (s == "^") {
                    st.push(pow(a, b));
                }
            } else {
                st.push(stoi(s));
            }
        }

        return st.top();
    }
};
