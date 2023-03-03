class Solution {
public:
    int strStr(string h, string n) {
        if(h.size()<n.size())
            return -1;
        for(int i=0;i<=h.size()-n.size();i++)
        {
            int j=0;
            for(;j<n.size();j++)
            {
                if(h[i+j] != n[j])
                    break;
            }
            if(j==n.size())
                return i;
        }
        return -1;
    }
};