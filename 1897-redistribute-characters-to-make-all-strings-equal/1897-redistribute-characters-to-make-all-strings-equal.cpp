class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int>freq(26,0);
        for(auto &x : words){
            for(auto &y:x){
                freq[y-'a']++;
            }
        }
        int sz = words.size();
        for(auto x:freq){
            if(x%sz != 0) return false;
        }
        return true;
    }
};