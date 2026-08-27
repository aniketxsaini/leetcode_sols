class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n = bloomDay.size();
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int i = 0, count = 0, res = 0;
        if ((long long)m*k>n) {
            return -1;
        }
        while (low <= high) {

            int mid = low + (high - low) / 2;
            res = 0,count=0;
            for (i = 0; i < n; i++) {
                if (bloomDay[i] <= mid) {
                    count++;
                } else {
                    res += count / k;
                    count = 0;
                }
            }
            res += count / k;
            if (res < m) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};