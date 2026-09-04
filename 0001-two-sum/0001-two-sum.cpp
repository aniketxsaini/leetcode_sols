class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=0;
        int sum=0;
        for(i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                if(nums[j]==target-nums[i]){
                    return {i,j};
                }
            }

        }
        return {};
    }


};