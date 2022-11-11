class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<long long int>>pq;
        for(auto x:points){
            pq.push({1ll*x[0]*x[0]+1ll*x[1]*x[1],x[0],x[1]});
            if(pq.size()>k)
                pq.pop();
        }
        vector<vector<int>>res(k);
        for(int i=0;i<k;i++){
            vector<long long>top = pq.top();
            pq.pop();
            res[i] = {(int)top[1],(int)top[2]};
        }
        return res;
    }
};