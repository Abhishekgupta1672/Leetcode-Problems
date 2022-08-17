class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string>res = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_set<string>st;
        for(auto word : words)
        {
            string s = "";
            for(auto ch : word)
                s+=res[ch-'a'];
            st.insert(s);
        }
        return st.size();
    }
};