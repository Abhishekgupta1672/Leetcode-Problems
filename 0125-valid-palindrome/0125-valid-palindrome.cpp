class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if(isalnum(s[i]))
                str+=tolower(s[i]);
        }
        string p = str;
        int i=0,j = str.size()-1;
        while(i<j)
            swap(str[i++],str[j--]);
        if(p==str)
            return true;
        else
            return false;
    }
};