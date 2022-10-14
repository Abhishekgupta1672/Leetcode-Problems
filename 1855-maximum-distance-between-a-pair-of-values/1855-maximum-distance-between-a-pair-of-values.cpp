class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i = 0 , j = 0 , m = nums1.size() , n = nums2.size() , res = 0;
        while(i<m && j<n){
            if(nums1[i] > nums2[j]) i++;
            else res = max(res,j++ - i);
        }
        return res;
    }
};