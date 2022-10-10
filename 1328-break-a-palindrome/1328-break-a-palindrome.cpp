class Solution {
public:
    string breakPalindrome(string str) {
        int sz = str.size();
        for(int i=0;i<sz/2;i++){
            if(str[i] != 'a'){
                str[i] = 'a';
                return str;
            }
        }
        str[sz-1] = 'b';
        return sz<2 ? "" : str;
    }
};