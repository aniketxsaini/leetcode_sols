class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = *max_element(weights.begin(),weights.end()); // min capacity of ship
        int high=accumulate(weights.begin(), weights.end(),0); // max capacity of ship needed for "one day scene"
        while (low <= high) {
            int mid = (low + high) / 2; // mid -> ship max capacity
            int currshipload = 0;
            int requiredDays = 1;
            for (int i = 0; i < n; i++) {
                if (currshipload + weights[i] <= mid) {
                    currshipload += weights[i];
                }else{
                    requiredDays++;
                    currshipload = weights[i];
                }
            }
           if (requiredDays <= days) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};