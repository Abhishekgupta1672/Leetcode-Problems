class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<int>>mp;
        queue<pair<int,TreeNode*>>q;
        q.push({0,root});
        while(!q.empty())
        {
            multiset<pair<int, int>> tmp; 
            int len=q.size();
            for(int i=0;i<len;++i)
            {
                auto p=q.front();q.pop();
                tmp.insert(make_pair(p.first, p.second->val));
                if (p.second->left) q.push(make_pair(p.first-1, p.second->left));
                if (p.second->right) q.push(make_pair(p.first+1, p.second->right));
            }
            for(auto itr : tmp)
                mp[itr.first].push_back(itr.second);
        }
        
        vector<vector<int>>res;
        for(auto x:mp) res.push_back(x.second);
        return res;
    }
};