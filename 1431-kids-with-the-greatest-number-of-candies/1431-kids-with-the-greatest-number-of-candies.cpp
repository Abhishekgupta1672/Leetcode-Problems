class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool>v(n);
        int maxi = *max_element(candies.begin(),candies.end());
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies >=maxi)
                v[i] = true;
            else
                v[i] = false;
        }
        return v;
    }
};