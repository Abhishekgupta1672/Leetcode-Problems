class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        multimap<double,pair<int,int>>mp;
        for(int i=0;i<points.size();i++){
            double ans=sqrt(pow(points[i][0],2)+pow(points[i][1],2));
            mp.insert({ans,{points[i][0],points[i][1]}});
        }
        vector<vector<int>>res;
        for(auto i:mp){
            res.push_back({i.second.first,i.second.second});
            k--;
            if(k==0) break;
        }
        return res;
    }
};