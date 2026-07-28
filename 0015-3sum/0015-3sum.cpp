class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int sum = -nums[i];
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                if(j<nums.size()&&nums[j]+nums[k]==sum){
            
                res.push_back({nums[i],nums[j],nums[k]});
                j++;
                k--;
                while(j>0 && j<nums.size() && nums[j]==nums[j-1]){
                    j++;
                }
                while(k<nums.size()-1 && k>0 && nums[k]==nums[k+1]){
                    k--;
                }
                
             }else if(nums[j]+nums[k]>sum){
                    k--;
                }else{
                    j++;
                }
            }

        }
        return res;
    }
};