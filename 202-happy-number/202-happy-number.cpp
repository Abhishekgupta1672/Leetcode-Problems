class Solution {
public:
    int happyNum(int n)
    {
        int num = 0;
        while(n>0)
        {
            num += (n%10)*(n%10);
            n/=10;
        }
        return num;
    }
    
    bool isHappy(int n) {
        int slow = n;
        int fast = happyNum(n);
        while(fast != 1 && slow != fast)
        {
            slow = happyNum(slow);
            fast = happyNum(happyNum(fast));
        }
        return fast==1;
    }
};