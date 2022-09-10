class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = INT_MAX;
        int tp = 0;
        int mp = 0;
        for(auto x:prices){
            if(maxi > x) maxi = x;
            tp = x-maxi;
            if(mp<tp) mp = tp;
        }
        return mp;
    }
};