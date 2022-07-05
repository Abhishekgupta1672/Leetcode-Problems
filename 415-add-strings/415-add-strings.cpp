class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1;
        int j = num2.size()-1;
        int cnt = 0;
        string res = "";
        while(i>=0 && j>=0)
        {
            cnt+= (num1[i--]-'0')+(num2[j--]-'0');
            res+=char(cnt%10+'0');
            cnt/=10;
        }
        while(i>=0)
        {
            cnt+= (num1[i--]-'0');
            res+=char(cnt%10+'0');
            cnt/=10;
        }
         while(j>=0)
        {
            cnt+= (num2[j--]-'0');
            res+=char(cnt%10+'0');
            cnt/=10;
        }
        if(cnt>0)
            res+=char(cnt%10+'0');
        reverse(res.begin() , res.end());
        return res;
    }
};