class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        vector<double>res;
        vector<long long>tmp;
        for(int i= 0; i<k; i++)
            tmp.insert(lower_bound(tmp.begin(),tmp.end(),nums[i]),nums[i]);
        if(k%2==0)
            res.push_back((double)(tmp[k/2]+tmp[k/2-1])/2);
        else
            res.push_back((double)tmp[k/2]);
        for(int i=k; i<nums.size(); i++)
        {
            tmp.erase(lower_bound(tmp.begin(),tmp.end(),nums[i-k]));
            tmp.insert(lower_bound(tmp.begin(),tmp.end(),nums[i]),nums[i]);
            if(k%2==0)
                res.push_back((double)(tmp[k/2]+tmp[k/2-1])/2 );
            else
                res.push_back((double)tmp[k/2]);
        }
        return res;
    }
};