class Solution {
public:
    const long long int mod = 1000000007;

    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        sort(hc.begin() , hc.end());
        sort(vc.begin() , vc.end());
        
        vector<int>hh = {hc[0]};
        for(int i=1;i<hc.size();i++)
        {
            hh.push_back(hc[i]-hc[i-1]);
        }
        hh.push_back(h-hc[hc.size()-1]);
        
        vector<int>vh = {vc[0]};
        for(int i=1;i<vc.size();i++)
        {
            vh.push_back(vc[i]-vc[i-1]);
        }
        vh.push_back(w-vc[vc.size()-1]);
        
        long long int maxH = *max_element(hh.begin() , hh.end());
        long long int maxV = *max_element(vh.begin() , vh.end());
        return (int)(maxH%mod*maxV%mod);

    }
};