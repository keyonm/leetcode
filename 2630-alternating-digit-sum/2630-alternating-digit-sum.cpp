class Solution {
public:
    int alternateDigitSum(int n) {
        int digits = 0;
        int sum = 0;
        int sign = 0;

        while (n) {
            int digit = n % 10;
            ++digits;
            if (sign) {
                sum -= digit;
            } else {
                sum += digit;
            }
            sign = 1 - sign;
            n /= 10;
        }

        if (digits % 2 == 0) {
            return -1 * sum;
        }

        return sum;
    }
};