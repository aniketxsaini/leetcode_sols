class Solution {
public:
    bool check(vector<int>& nums) {
       int breakpoint=0;
       int n=int(nums.size());
       for(int i=0;i<n;i++){
        if(nums[i%n]>nums[(i+1)%n]){
            breakpoint++;
        }
       }
        return (breakpoint<=1)?true:false;
    }
};