class Solution {
public:
    int myAtoi(string s) {
        long long num = 0;
        int i = 0, n = s.size();
        int isneg = 0;
        while (i < n && s[i] == ' ') {
            i++;
        }
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            isneg = (s[i] == '-');
            i++;
        }
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            if (num > (INT_MAX - digit) / 10LL) {
                return isneg ? INT_MIN : INT_MAX;
            }

            num = num * 10 + digit;
            i++;
        }
        return isneg ? -num : num;
    }
};
