class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int mp = 0;
        for(int i=1;i<prices.size();i++){
            int tp = prices[i]-mini;
            mp = max(mp,tp);
            mini = min(mini,prices[i]);
        }
        return mp;
    }
};