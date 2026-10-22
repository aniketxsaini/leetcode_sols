class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        //[5,6,7,8,9,1,2,3]
        int low=0,high=arr.size()-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(arr[low]==arr[high]) return mid;
            if(arr[mid]<arr[mid+1]){
                low=mid+1;
            }else{
                high=mid;
            }
        }
        return low;
    }
};