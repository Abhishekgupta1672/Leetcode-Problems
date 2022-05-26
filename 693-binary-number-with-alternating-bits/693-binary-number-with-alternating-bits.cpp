class Solution {
public:
    bool hasAlternatingBits(int n) {
        int curr = n%2;
        n/=2;
        while(n)
        {
            if(curr ==n%2)
                return false;
            curr = n%2;
            n/=2;
        }
        return true;
    }
};