class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        for (char i : text) mp[i] += 1;
        return min(mp['b'], min(mp['a'], min(mp['l']/2, min(mp['o']/2,mp['n']))));
    }
};