class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //int n = sizeof(numbers)/sizeof(numbers[0]);
        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            int sum = numbers[i]+numbers[j];
            if(sum==target){
                return {i+1,j+1};
            }else if(numbers[i]+numbers[j]<target){
                i++;
            }else if(numbers[i]+numbers[j]>target){
                j--;
            }
        }
        return {};
    }
};