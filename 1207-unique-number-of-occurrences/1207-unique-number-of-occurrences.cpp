class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        vector<int>v;
        for(auto x:m)
        {
            v.push_back(x.second);
        }
        int flag=1;
        for(int i=0;i<m.size();i++){
            for(int j=i+1;j<m.size();j++)
            {
                if(v[i]==v[j])
                {
                    flag=0;
                }
                if(flag==0)
                    break;
            }}
        if(flag==1)
            return true;
        else
            return false;
    }
};