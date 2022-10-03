class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int i = 0 , j = 0;
        int total = 0;
        while(i<neededTime.size() && j<neededTime.size()){
            int curT = 0 , maxS = 0;
            while(j<neededTime.size() && colors[i]==colors[j]){
                curT+=neededTime[j];
                maxS = max(maxS,neededTime[j]);
                j++;
            }
            total+=(curT-maxS);
            i++;
        }
        return total;
    }
};