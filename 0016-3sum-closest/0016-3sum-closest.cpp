class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i,j=1, res,sum, k = int(nums.size()) - 1,diff = INT_MAX;
        for (i = 0; i < nums.size() - 2; i++) {
           
            j=i+1;
            k=int(nums.size())-1;
            while (j < k) {
                sum = nums[i] + nums[j] + nums[k];
                if (abs(sum - target) < diff) {
                    diff = abs(sum - target);
                    res = sum;
                }
                if (sum == target) {
                    res=sum;
                    return res;
                } else if (sum > target) {
                    k--;
                } else {
                    j++;
                }
            }
        }
        return res;
    }
};