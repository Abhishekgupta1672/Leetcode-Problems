class Solution {
public:
    bool checkPowersOfThree(int n) {
        vector<int>res;
        int i = 0;
        while(pow(3,i) <= n)
        {
            if(pow(3,i) == n)
                return true;
            res.push_back(pow(3,i));
            i++;
        }
        // for(auto x : res)
        //     cout<<x<<" ";
        // return false;
        for(int i = res.size()-1;i>=0;i--)
        {
            if(n >= res[i])
            {
                n-=res[i];
            }
            if(n==0) return true;
        }
        return false;
    }
};