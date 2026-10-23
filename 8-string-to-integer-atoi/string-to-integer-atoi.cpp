
class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;
        int sign = 1;
        long long number = 0;

        // Step 1: Skip leading spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Step 2: Determine the sign
        if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        } 
        else if (i < n && s[i] == '+') {
            i++;
        }

        // Step 3: Read digits and build the number
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';

            number = number * 10 + digit;

            // Step 4: Handle 32-bit integer overflow
            long long limit = (sign == 1) ? INT_MAX : 2147483648LL;

            if (number > limit) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            i++;
        }

        return static_cast<int>(number * sign);
    }
};
