class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(auto X:nums)
            st.insert(X);
        int longestStreak = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i]-1) == st.end())
            {
                int curNum = nums[i];
                int curStreak = 1;
                while(st.find(curNum+1) != st.end())
                {
                    curNum +=1;
                    curStreak+=1;
                }
                longestStreak = max(longestStreak , curStreak);
            }
        }
        return longestStreak;
    }
};