class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n= piles.size();
        int maxElement = *max_element(piles.begin(),piles.end());
        int low=1,high=maxElement;
        while(low<=high){
            int mid= (low+high)/2;
            double hrsSum=0.0;
            for(int i=0;i<n;i++){
                hrsSum+=ceil((double)piles[i]/mid);
            }
            if(hrsSum<=h){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }

        return low;
    }
};