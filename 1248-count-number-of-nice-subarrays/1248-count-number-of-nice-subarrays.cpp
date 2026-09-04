class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int l = 0, r = 0;
        int oddcount = 0;
        int prefixEven = 0;
        int ans = 0;

        while (r < nums.size()) {

            // Add current element
            if (nums[r] % 2 == 1) {
                oddcount++;
                prefixEven = 0;   // new odd -> start counting trailing evens again
            }

            // Too many odds
            while (oddcount > k) {
                if (nums[l] % 2 == 1) {
                    oddcount--;
                    prefixEven = 0;
                } else {
                    prefixEven++;
                }
                l++;
            }

            // Exactly k odds
            if (oddcount == k) {
                 while (l <= r && nums[l] % 2 == 0) {
                    prefixEven++;
                    l++;
                }
                ans += prefixEven + 1;
            }

            r++;
        }

        return ans;
    }
};