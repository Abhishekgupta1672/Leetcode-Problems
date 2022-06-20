class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        vector<int>result;
        int m = p.size() , n = s.size();
        if(m>n)
            return result;
        int right = 0 , left = 0;
        for(int i=0;i<m;i++)
        {
            v1[p[i]-'a']++;
            v2[s[i]-'a']++;
            right++;
        }
        right-=1;
        while(right<n){
            if(v1==v2)
                result.push_back(left);
            right+=1;
            if(right!=n)
                v2[s[right]-'a']+=1;
            v2[s[left]-'a']-=1;
            left++;
        }
        return result;
    }
};