class Solution {
public:
    int count = 0;
    void findSubstrings(string s, int start, int n) {
        for(int end = start; end<n; end++)
            if(isPalindrome(start, end, s))
                count++;
    }
    bool isPalindrome(int start, int end, string s) {
        while(start<=end) {
            if(s[start++]!=s[end--]) return false;
        }
        return true;
    }
    int countSubstrings(string s) {
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            findSubstrings(s,i,n);
        }
        return count;
    }
};