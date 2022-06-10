class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            string str = "";
            int cnt[256]={0};
            int temp =0;
            int flag = 0;
            for(int j=i;j<s.size();j++)
            {
                str+=s[j];
                cnt[s[j]]++;
                for(int k=0;k<256;k++)
                {
                    if(cnt[k]>1)
                    {
                        flag = 1;
                        break;
                    }
                }
                if(flag)
                {
                    break;
                }
                else
                    temp++;
            }
            res = max(res,temp);
        }
        return res==INT_MIN?0:res;
    }
};