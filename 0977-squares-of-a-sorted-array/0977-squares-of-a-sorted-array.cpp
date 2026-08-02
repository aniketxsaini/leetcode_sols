class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=int(nums.size());
        int low=0;
        int high=n-1;
        vector<int> res(n);
        int pos = n-1;
        while(low<=high){
            int lowsq=nums[low]*nums[low];
            int highsq=nums[high]*nums[high];
            if(lowsq>highsq){
                res[pos]=lowsq;
                low++;
            }else{
                res[pos]=highsq;
                high--;
            }
            pos--;
        }
        return res;
    }
};