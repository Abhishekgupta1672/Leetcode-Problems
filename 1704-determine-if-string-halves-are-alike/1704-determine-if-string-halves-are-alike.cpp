class Solution {
public:
    bool halvesAreAlike(string s) {
        int i = 0 , j = s.size()-1;
        int cnt1 = 0 , cnt2 = 0;
        while(i<j){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') cnt1++;
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' ||s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U') cnt2++;
            i++;
            j--;
        }
        return cnt1==cnt2;
    }
};