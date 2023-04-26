class Solution {
public:
    int sumofdigits(int num)
    {
        int sum = 0;
        while(num>0)
        {
            sum+= num%10;
            num /=10;
        }
        return sum;
    }
    int addDigits(int num) {
        int n = sumofdigits(num);
        while(n>=10)
        {
            n = sumofdigits(n);
        }
        return n;
    }
};