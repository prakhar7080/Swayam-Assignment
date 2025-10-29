class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        priority_queue<int, vector<int>, less<int>> maxHeap;
        for(int n:arr){
            maxHeap.push(n);
            if(maxHeap.size() > k) maxHeap.pop();
        }
        return maxHeap.top();
    }
};
