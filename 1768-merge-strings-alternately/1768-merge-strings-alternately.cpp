class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.size() , n = word2.size() ,i=0,j=0;
        string res = "";
        while(i<m || j<n)
        {
            if(i<m)
            res+=word1[i++];
            if(j<n)
                res+=word2[j++];
            
        }
        return res;
    }
};