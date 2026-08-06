class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=0;
        while(true){
           while(low<n && nums[low]!=0){
            low++;
           }
           if(low==n){
            break;
           }
           high=low+1;
           while(high<n && nums[high]==0){
            high++;
           }
           if(high==n){
            break;
           }
           swap(nums[low],nums[high]);
        }
    }  
};