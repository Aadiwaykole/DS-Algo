class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        int hash[256];
        fill(hash, hash + 256, -1);

        int left = 0;
        int right = 0;
        int maxLen = 0;

        while (right < n) {

            // Character has appeared before
            if (hash[(unsigned char)s[right]] != -1) {

                // Move left past the previous occurrence,
                // but never move left backward
                left = max(left,
                           hash[(unsigned char)s[right]] + 1);
            }

            // Current window length
            int len = right - left + 1;
            maxLen = max(maxLen, len);

            // Record the latest index of this character
            hash[(unsigned char)s[right]] = right;

            right++;
        }

        return maxLen;
    }
};