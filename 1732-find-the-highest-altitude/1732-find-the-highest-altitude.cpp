class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int alt = 0 , res = 0;
        for(int i=0;i<gain.size();++i)
        {
            res += gain[i];
            alt = max(res,alt);
        }
        return alt;
    }
};