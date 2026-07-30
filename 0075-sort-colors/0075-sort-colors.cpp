class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = 0, k = int(nums.size()) - 1;
        for (i = 0; i < nums.size(); i++) {
            while (j <= k) {
                if (nums[j] == 1) {
                    j++;
                    continue;
                } else if (nums[j] == 2) {
                    swap(nums[j], nums[k]);
                    k--;
                } else if (nums[j] == 0) {
                    swap(nums[i], nums[j]);
                    j++;
                    i++;
                }
            }
        }
    }
};