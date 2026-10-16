class Solution {
public:
    int reverse(int x) {
        long long res = 0;
        long long num = x;
        int isneg = 0;

        if (num < 0) {
            isneg = 1;
            num = -num;
        }

        while (num > 0) {
            res = res * 10 + num % 10;
            num /= 10;

            if (res > INT_MAX) {
                return 0;
            }
        }

        return isneg ? -res : res;
    }
};