class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorNum=nums[0];
        for(int i=1;i<nums.size();i++){
            xorNum=xorNum^nums[i];
        }
        return xorNum;
    }
};