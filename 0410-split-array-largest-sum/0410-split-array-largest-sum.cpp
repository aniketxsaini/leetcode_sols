class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while (low <= high) {
            int mid=low+(high-low)/2;
        if(countPieces(nums,mid)<=k){
            high=mid-1;
        }else{
            low=mid+1;
        }
        }
        return low;
    }

private:
    int countPieces(vector<int>& nums, int mid) {
        long long currSum = 0;
        int pieces = 1;
        for (int num : nums) {
            if (currSum + num > mid) {
                pieces++;
                currSum = num;
            } else {
                currSum += num;
            }
        }
        return pieces;
    }
};