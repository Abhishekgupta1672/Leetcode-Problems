class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int len = 0 , l = 0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') 
                len++;
        }
        int maxi = len;
        for(int i=k;i<n;i++){
            if(s[l]=='a' || s[l]=='e' || s[l]=='i' || s[l]=='o' || s[l]=='u')
                len--;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                len++;
            l++;
            maxi = max(maxi,len);
        }
        return maxi;
    }
};