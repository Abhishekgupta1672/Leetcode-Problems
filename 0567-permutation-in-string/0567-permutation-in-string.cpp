class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        int m = s1.size() , n = s2.size();
        if(m>n)
            return false;
        int right = 0 , left = 0;
        for(int i=0;i<m;i++)
        {
            v1[s1[i]-'a']++;
            v2[s2[i]-'a']++;
            right++;
        }
        int cnt = 0;
        right-=1;
        while(right<n){
            if(v1==v2)
            {
                cout<<cnt;
                return true;
            }
            right+=1;
            if(right!=n)
                v2[s2[right]-'a']+=1;
            v2[s2[left]-'a']-=1;
            left++;
            cnt++;
        }
        return false;
    }
};