class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        string str = "1";
        for(int i=2;i<=n;i++)
        {
            int len = str.size();
            string temp = "";
            int cnt = 1;
            for(int j = 1;j<len;j++)
            {
                if(str[j]!=str[j-1])
                {
                    temp+=cnt+'0';
                    temp+=str[j-1];
                    cnt = 1;
                }
                else
                    cnt++;
                
            }
            temp+=cnt+'0';
            temp+=str.back();
            str = temp;
        }
        return str;
    }
};