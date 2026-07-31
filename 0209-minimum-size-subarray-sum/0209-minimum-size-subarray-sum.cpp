class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0,high=0,sum=0,len;
        int res=INT_MAX;

        while(high<nums.size()){
            sum=sum+nums[high];
            while(sum>=target){
                len=high-low+1;
                res=min(res,len);
                sum=sum-nums[low];
                low++;
            }
            high++;
        }
        if(res!=INT_MAX){
            return res;
        }
        return 0;
    }
};