class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int i = 0 , j = tokens.size()-1 , cnt = 0 , maxP = 0;
        if(tokens.empty()) return 0;
        sort(tokens.begin(),tokens.end());
        if(tokens[0] > power) return maxP;
        while(i<=j){
            if(power >= tokens[i]){
                cnt++;
                power-=tokens[i];
                maxP = max(maxP,cnt);
                i++;
            }
            else if(cnt>=1){
                power+=tokens[j];
                cnt--;
                j--;
            }
        }
        return maxP;
    }
};