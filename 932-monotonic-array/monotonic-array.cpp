class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

        bool increasing = true;
        bool decreasing = true;

        for (int i = 0; i < nums.size() - 1; i++) {

            // If current element is greater than next,
            // array cannot be increasing
            if (nums[i] > nums[i + 1]) {
                increasing = false;
            }

            // If current element is smaller than next,
            // array cannot be decreasing
            if (nums[i] < nums[i + 1]) {
                decreasing = false;
            }
        }

        return increasing || decreasing;
    }
};