class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long result=0;
        bool minS = false , minE = false;
        int start = 0 , s = 0 , e = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK || nums[i]>maxK){
                minS = false;
                minE = false;
                start = i+1;
            }
            if(nums[i]==minK){
                s = i;
                minS = true;
            }
            if(nums[i]==maxK){
                e = i;
                minE = true;
            }
            if(minS && minE){
                result+=(min(s,e)-start+1);
            }
        }
        return result;
    }
};