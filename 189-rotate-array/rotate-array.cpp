class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k = k % n;  // Handle k greater than n

        reverse(nums.begin(), nums.end() - k);
        reverse(nums.end() - k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};