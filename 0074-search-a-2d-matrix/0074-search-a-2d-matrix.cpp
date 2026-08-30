class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        int m=matrix.size();
        int n=matrix[0].size();
        int rlow=0,rhigh=m-1;

        while(rlow<=rhigh){
            int midRow=(rlow+rhigh)/2;
            int elow=0,ehigh=n-1;
            if(target>=matrix[midRow][elow]&&target<=matrix[midRow][ehigh]){
                return bs(matrix[midRow],target);
            }
            if(target<matrix[midRow][elow]){
                rhigh=midRow-1;
            }else{
                rlow=midRow+1;
            }
        }
        return false;

        
    }
    private:
    bool bs(vector<int>& nums,int target){
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return false;
    }
};