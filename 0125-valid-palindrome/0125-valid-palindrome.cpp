class Solution {
public:
    bool validpalindrome(string s){
        int i=0;
        int j=s.length()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                return 0;
            }else{
                i++;j--;
            }
            
        }
        return 1;
    }
    bool isPalindrome(string s) {
        string temp="";
        for(auto x:s){
            if(isalnum(x)) temp.push_back(tolower(x));
        }
        return (validpalindrome(temp));
    }
};