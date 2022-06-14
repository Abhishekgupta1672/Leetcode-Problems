class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        int window = n-k+1;
        vector<int>left(n),right(n);
        for(int i=0;i<n;i++)
        {
            left[i] = nums[i];
            if(i%k != 0)
                left[i] = max(left[i] , left[i-1]);
        }
        right[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            right[i] = nums[i];
            if(i%k != (k-1))
                right[i] = max(right[i] , right[i+1]);
        }
        vector<int>ans;
        for(int i=0;i<window;i++)
        {
            ans.push_back(max(right[i] , left[i+k-1]));
        }
        return ans;
    }
};