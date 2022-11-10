class Solution {
public:
    string removeDuplicates(string s) {
        int sp = -1;
        for(int i=0;i<s.size();i++){
            if(sp==-1 || s[i] != s[sp]){
                sp++;
                s[sp] = s[i];
            }
            else sp--;
        }
        return s.substr(0,sp+1);
    }
};