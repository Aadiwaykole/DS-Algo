class Solution {
public:

    // Function 1:
    // Find the maximum pile.
    int findMax(vector<int>& v) {

        int maxi = INT_MIN;

        for (int i = 0; i < v.size(); i++) {
            maxi = max(maxi, v[i]);
        }

        return maxi;
    }


    // Function 2:
    // Calculate how many hours Koko needs
    // if she eats 'hourly' bananas per hour.
    long long calculateTotalHours(vector<int>& v, int hourly) {

        long long totalH = 0;

        for (int i = 0; i < v.size(); i++) {

            totalH += ceil((double)v[i] / (double)hourly);
        }

        return totalH;
    }


    // Main function expected by LeetCode
    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;

        int high = findMax(piles);

        while (low <= high) {

            int mid = low + (high - low) / 2;

            long long totalH = calculateTotalHours(piles, mid);

            if (totalH <= h) {

                // mid works.
                // Try to find a smaller speed.
                high = mid - 1;
            }
            else {

                // mid does not work.
                // Need a faster speed.
                low = mid + 1;
            }
        }

        return low;
    }
};