class Solution {
public:
    bool isInterleave_helper(string s1 , string s2 , string s3 , int i , int j , int k , vector<vector<int>>&v)
    {
        if(v[i][j]!=-1)
            return v[i][j];
        if(i==s1.size() && j==s2.size() && k==s3.size())
            return true;
        bool x = false , y = false;
        if(i!=s1.size())
        {
            if(s1[i]==s3[k])
                x = isInterleave_helper(s1,s2,s3,i+1,j,k+1,v);
        }
        if(j!=s2.size())
        {
            if(s2[j]==s3[k])
                y = isInterleave_helper(s1,s2,s3,i,j+1,k+1,v);
        }
        return v[i][j]=x||y;
        
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        int len1 = s1.size() , len2 = s2.size();
        vector<vector<int>>v(len1+1 , vector<int>(len2+1 , -1));
        int i = 0 , j = 0 , k = 0;
        return isInterleave_helper(s1,s2,s3,0,0,0,v);
        
    }
};