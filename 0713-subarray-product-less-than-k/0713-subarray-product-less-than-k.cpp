class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int low,high,prod,count=0;
        for(int i=0;i<nums.size();i++){
            prod=1;
            high=i;
            low=i;
            while(high<nums.size()){
                prod*=nums[high];
                if(prod<k){
                    count++;
                }else{
                    break;
                }

                high++;
            }
        }

        return count;
    }
};