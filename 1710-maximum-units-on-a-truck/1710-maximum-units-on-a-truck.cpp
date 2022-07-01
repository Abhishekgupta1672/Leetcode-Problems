class Solution {
public:
    static bool cmp(vector<int>&a , vector<int>&b)
    {
        return a[1]>b[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin() , boxTypes.end() , cmp);
        int ans = 0;
        for(auto x : boxTypes)
        {
            int mini = min(x[0] , truckSize);
            ans+=(mini*x[1]);
            truckSize-=mini;
            if(!truckSize)
                break;
        }
        return ans;
    }
};