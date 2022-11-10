class Solution {
public:
    string removeStars(string s) {
        int i=0;
        for(auto x:s){
            if(x=='*') i--;
            else s[i++] = x;
        }
        s.resize(i);
        return s;
    }
};