class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26)
            return false;
        set<char>s;
        for(char ch:sentence)
            s.insert(ch);
        if(s.size()==26)
            return true;
        else
            return false;
        
    }
};