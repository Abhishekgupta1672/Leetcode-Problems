class Solution {
public:
    int minPartitions(string n) {
        int ans = 0 ;
        for(char ch : n)
            ans = max(ch-'0' , ans);
        return ans;
    }
};