class Solution {
public:
    string revvowel(string &s){
        vector<int>v;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                v.push_back(i);
            }
        }
        int i=0;
        int j= v.size()-1;
        while(i<j){
            swap(s[v[i]],s[v[j]]);
            i++;j--;
        }
        return s;
    }
    
    string reverseVowels(string s) {
        revvowel(s);
        return s;
    }
};