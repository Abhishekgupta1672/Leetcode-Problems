class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);
        int sz = s.size();
        int res = 0;
        if(sz%2 ==1){
            int cnt = 0;
            while(n>0){
                if(cnt%2==0)
                    res+= n%10;
                else
                    res-=n%10;
                n/=10;
                cnt++;
            }
        }
        else{
            int cnt = 0;
            while(n>0){
                if(cnt%2==0)
                    res-= n%10;
                else
                    res+=n%10;
                n/=10;
                cnt++;
            }
        }
        return res;
    }
};