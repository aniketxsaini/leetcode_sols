class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxone=0;

        for(int i=0;i<nums.size();i++){
            int count=0;
            while(nums[i]==1){
                count++;
                i++;
                maxone=max(maxone,count);
                if(i==nums.size()){break;}
            }
        }
        return maxone;
    }
};