class Solution {
public:
    int activitySelection(vector<int> start, vector<int> end, int n) {
        vector<pair<int,int>> v;
        for(int i=0; i<n; i++){
            v.push_back({end[i], start[i]});
        }
        sort(v.begin(), v.end());
        
        int last = v[0].first;
        int count = 1;
        
        for(int i=1; i<n; i++){
            int s = v[i].second;
            int e = v[i].first;
            if(s > last){
                count++;
                last = e;
            }
        }
        return count;
    }
};
