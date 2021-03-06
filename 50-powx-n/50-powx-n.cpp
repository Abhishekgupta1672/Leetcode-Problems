class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
            return 1;
        else if(n<0)
        {
            n = abs(n);
            x = 1/x;
        }
        if(n&1)
            return x*myPow(x*x , n/2);
        else
            return myPow(x*x , n/2);
    }
};