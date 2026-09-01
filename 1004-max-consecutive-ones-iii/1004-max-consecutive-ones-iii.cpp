class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int left=0,right=0,zeroes=0;
       int ans=INT_MIN;
       while(right<nums.size()){
        if(nums[right]==0){
            zeroes++;
        }
        if(zeroes>k){
            if(nums[left]==0){
                zeroes--;
                
            }
            left++;
        }
        if(zeroes<=k){
            ans=max(ans,right-left+1);
        }
        right++;
       }
       return ans;
    }
};