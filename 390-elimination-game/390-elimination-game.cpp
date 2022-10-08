class Solution {
public:
    int ltr(int n){
        if(n<=2) return n;
        return 2*rtl(n/2);
    }
    int rtl(int n){
        if(n<=2) return 1;
        if(n%2==1) return 2*ltr(n/2);
        return 2*ltr(n/2)-1;
    }
    int lastRemaining(int n) {
        return ltr(n);
    }
};