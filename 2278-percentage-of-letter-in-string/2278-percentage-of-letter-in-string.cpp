class Solution {
public:
    int percentageLetter(string s, char letter) {
        int len = s.size();
        unordered_map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        for(auto x:mp){
            if(x.first == letter){
                int sec = x.second;
                return floor((sec*100)/len);
            }
        }
        return 0;
    }
};