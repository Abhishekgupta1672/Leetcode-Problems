class Solution {
public:
    int fib(int n) {
        if(n<=1)
            return n;
        int x = 0;
        int y = 1;
        for(int i=2;i<=n;i++)
        {
            int cur = x+y;
            x = y;
            y = cur;
        }
        return y;
    }
};