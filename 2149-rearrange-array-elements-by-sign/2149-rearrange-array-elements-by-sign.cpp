class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int evenpos = 0, oddpos = 1;
        vector<int> res(nums);
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0 && oddpos < nums.size()) {
                res[oddpos] = nums[i];
                oddpos += 2;
            } else {
                if (evenpos < nums.size() - 1) {
                    res[evenpos] = nums[i];
                    evenpos+=2;
                }
            }
           
        }
         return res;
    }
};