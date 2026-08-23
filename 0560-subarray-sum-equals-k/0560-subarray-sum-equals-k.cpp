class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int left=0,right=0;
        int n=nums.size();
        for(left=0;left<n;left++){
            int sum=0;
            right=left;
            while(right<n){
                sum+=nums[right];
                if(sum==k){
                    count++;
                }
                right++;
            }
        }
        return count;

    }
};