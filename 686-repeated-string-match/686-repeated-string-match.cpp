class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string copy = a;
        for(int rep = 1; rep<= b.size()/a.size() +2;rep++ , copy+=a)
        {
            if(copy.find(b) !=  string::npos)
                return rep;
        }
        return -1;
    }
};