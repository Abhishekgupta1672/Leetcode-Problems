class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() , m = nums2.size();
        vector<double>merge;
        int i = 0 , j = 0;
        while(i<n && j<m)
        {
            if(nums1[i]<=nums2[j])
            {
                merge.push_back(nums1[i]);
                i++;
            }
            else
            {
                merge.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n)
        {
            merge.push_back(nums1[i]);
            i++;
        }
        while(j<m)
        {
            merge.push_back(nums2[j]);
            j++;
        }
        int sz = merge.size();
        double res = 0;
        if(sz&1)
        {
            res = merge[sz/2];
        }
        else
            res = (merge[(sz-1)/2]+merge[sz/2])/2;
        return res;
    }
};