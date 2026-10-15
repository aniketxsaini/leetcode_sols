class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum=0;
       
        int left=0,right=0;
        for(left=0;left<nums.size();left++){
            set<int> s;
            right=left;
            while(right<nums.size()){
                s.insert(nums[right]);
                sum+=s.size()*s.size();
                right++;
            }
        }
        return sum;
        
    }
};