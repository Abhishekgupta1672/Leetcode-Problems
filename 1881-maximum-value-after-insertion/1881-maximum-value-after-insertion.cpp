class Solution {
public:
    string maxValue(string n, int x) {
        int sz = n.size();
        string res = "";
        if(n[0]=='-'){
            for(int i=1;i<sz;i++){
                if(x<n[i]-'0'){
                    // cout<<n.substr(1,i)<<" "<<n.substr(i+1,sz);
                    res = "-"+n.substr(1,i-1)+to_string(x)+n.substr(i);
                    return res;
                }
            }
        }
        else{
             for(int i=0;i<sz;i++){
                if(x>n[i]-'0'){
                    res = n.substr(0,i)+to_string(x)+n.substr(i);
                    return res;
                }
            }
        }
        return n+to_string(x);
    }
};