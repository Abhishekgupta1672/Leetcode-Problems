class Solution {
public:
    void rec(vector<int> &tmp,int n,int k,int num,int i=1){
        if(i == n) {
            tmp.push_back(num);
            return;
        }
        int d = num%10;
        if(d+k <= 9){
            rec(tmp,n,k,num*10+d+k,i+1);
        }
        if(k != 0 && d-k >=0){
            rec(tmp,n,k,num*10+d-k,i+1);
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> tmp;
        for(int i = 1 ; i <= 9 ; i++){
            rec(tmp,n,k,i);
        }
        return tmp;
    }
};