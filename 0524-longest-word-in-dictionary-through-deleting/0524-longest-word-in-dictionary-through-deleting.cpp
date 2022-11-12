class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        int n = d.size();
        int m = s.size();
        string ans = "";
        for(int i=0;i<n;i++){
            string cur = d[i];
            int a = 0 , b = 0 , cnt = 0;
            while(a<m && b<cur.size()){
                if(s[a]==cur[b]){
                    b++;
                    cnt++;
                }
                a++;
            }
            if(cnt==cur.size()){
            if(ans.size()<cur.size() || (ans.size()==cur.size() && cur<ans))
                ans = cur;
            }
        }
        return ans;
    }
};