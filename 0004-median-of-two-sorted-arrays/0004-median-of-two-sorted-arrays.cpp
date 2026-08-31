class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = n1 + n2;

        int count = 0, i = 0, j = 0;

        int idx1 = n / 2;
        int idx2 = n / 2 - 1;

        int ele1 = 0, ele2 = 0;

        while (i < n1 || j < n2) {

            int current;

            if (j >= n2 || (i < n1 && nums1[i] <= nums2[j])) {
                current = nums1[i++];
            } 
            else {
                current = nums2[j++];
            }

            if (count == idx1)
                ele1 = current;

            if (count == idx2)
                ele2 = current;

            count++;

            if (count > n / 2)
                break;
        }

        if (n % 2 == 1)
            return ele1;

        return ((double)ele1 + ele2) / 2.0;
    }
};