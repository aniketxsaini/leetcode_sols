class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> missing;
        int counting=0;
        int i=0;
        while(i<arr.size()){
            counting++;
            if(counting!=arr[i]){
                missing.push_back(counting);
            }else{
                i++;
            }
        }
        while(missing.size()<=k){
            counting++;
            missing.push_back(counting);
        }

        return missing[k-1];
        

        
    }
};