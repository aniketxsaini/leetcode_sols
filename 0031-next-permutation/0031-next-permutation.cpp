class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index;
        int breakpoint = -1;
        for (index = n - 1; index > 0; index--) {
            if (nums[index - 1] < nums[index]) {
                breakpoint = index - 1;
                break;
            }
        }
        if (breakpoint != -1) {
            for (index = n - 1; index >= 0; index--) {
                if (nums[index] > nums[breakpoint]) {
                    swap(nums[index], nums[breakpoint]);
                    break;
                }
            }
        }

        reverse(nums.begin() + breakpoint+1, nums.end());
    }
};