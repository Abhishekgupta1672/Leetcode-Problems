class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int majorityEle;
        for(auto i:nums)
        {
            if(cnt==0)
                majorityEle = i;
            cnt+=(i==majorityEle)?1:-1;
        }
        return majorityEle;
    }
};