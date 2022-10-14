class Solution {
public:
    int bsearch(vector<int>&nums2 , int target , int start){
        int l = start , h = nums2.size()-1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(nums2[mid] < target) h = mid-1;
            else l = mid+1;
        }
        if(h<0) return -1;
        return nums2[h]>=target?h:-1;
    }
    
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int res = 0;
        int n = nums1.size();
        for(int i=0;i<n;i++){
            int j = bsearch(nums2,nums1[i],i);
            if(j==-1) continue;
            res = max(res,j-i);
        }
        return res;
    }
};