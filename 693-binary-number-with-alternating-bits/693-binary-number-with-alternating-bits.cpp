class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int>res;
        while(n)
        {
            res.push_back(n%2);
            n/=2;
        }
        for(int i=1;i<res.size();i++)
        {
            if(res[i]==res[i-1])
                return false;
        }
        return true;
    }
};