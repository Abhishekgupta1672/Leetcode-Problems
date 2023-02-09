class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        unordered_map<string,int>mp;
        for(auto x:ideas){
            mp[x]++;
        }
        vector<vector<long long>>res(26,vector<long long>(26,0));
        for(int i=0;i<ideas.size();i++){
            string words = ideas[i].substr(1);
            int in = ideas[i][0]-'a';
            for(int j=0;j<26;j++){
                char c = 'a'+j;
                string temp = c+words;
                if(mp.count(temp)==0){
                    res[in][j] += 1;
                }
            }
        }   
        long long cnt = 0;
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                if(i==j) continue;
                if(res[i][j]>0){
                    cnt+=(res[i][j]*res[j][i]);
                }
            }
        }
        return cnt;
    }
};