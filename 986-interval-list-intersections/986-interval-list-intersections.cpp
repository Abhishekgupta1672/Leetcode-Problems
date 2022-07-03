class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& fl, vector<vector<int>>& sl) {
        int i = 0 , j= 0 ;
        vector<vector<int>>v;
        while(i<fl.size() && j< sl.size())
        {
            int low = max(fl[i][0] , sl[j][0]);
            int high = min(fl[i][1] , sl[j][1]);
            if(low <= high)
                v.push_back({low , high});
            if(fl[i][1]<sl[j][1])
                i++;
            else
                j++;
        }
        return v;
    }
};