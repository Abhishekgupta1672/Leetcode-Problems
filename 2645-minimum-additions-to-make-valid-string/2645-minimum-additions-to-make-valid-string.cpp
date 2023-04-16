class Solution {
public:
    int addMinimum(string word) {
        int k = 0, cur = 'z';
        for (char& c: word) {
            k += c <= cur;
            cur = c;
        }
        return k * 3 - word.size();
    }
};