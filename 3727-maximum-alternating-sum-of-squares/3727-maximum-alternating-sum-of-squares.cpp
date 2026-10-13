class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(auto &x:nums){
            x=abs(x);
        }
        sort(nums.begin(),nums.end());
        long long n=nums.size();
        long long idx=n/2;
        long long a=0;
        long long b=0;
        for(long long i=0;i<idx;i++){
            a+=1LL*nums[i]*nums[i];
        }
        for(long long i=idx;i<nums.size();i++){
            b+=1LL*nums[i]*nums[i];
        }
        return b-a;

    }
};