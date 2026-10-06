class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {

        // Take each element from nums1
        for (int i = 0; i < nums1.size(); i++) {

            int target = nums1[i];

            int low = 0;
            int high = nums2.size() - 1;

            // Binary search target in nums2
            while (low <= high) {

                int mid = low + (high - low) / 2;

                if (nums2[mid] == target) {
                    return target;
                }
                else if (nums2[mid] < target) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }

        return -1;
    }
};