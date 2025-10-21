class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        vector<int> s;
        for(int x : a){
            bool alive = true;
            while(alive && x < 0 && !s.empty() && s.back() > 0){
                if(s.back() < -x) s.pop_back();
                else if(s.back() == -x){ s.pop_back(); alive = false; break; }
                else alive = false;
            }
            if(alive) s.push_back(x);
        }
        return s;
    }
};
