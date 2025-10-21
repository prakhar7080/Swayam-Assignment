class Solution {
public:
    void merge(vector<int>& nums, int start, int mid, int end) {
        vector<int> left(nums.begin() + start, nums.begin() + mid + 1);
        vector<int> right(nums.begin() + mid + 1, nums.begin() + end + 1);

        int i = 0, j = 0, k = start;

        while (i < left.size() && j < right.size()) {
            if (left[i] <= right[j]) nums[k++] = left[i++];
            else nums[k++] = right[j++];
        }

        while (i < left.size()) nums[k++] = left[i++];
        while (j < right.size()) nums[k++] = right[j++];
    }

    void mergesort(vector<int>& nums, int start, int end) {
        if (start >= end) return;

        int mid = start + (end - start) / 2;
        mergesort(nums, start, mid);
        mergesort(nums, mid + 1, end);
        merge(nums, start, mid, end);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0, nums.size() - 1);
        return nums;
    }
};
