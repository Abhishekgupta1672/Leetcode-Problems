class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<int>>mp;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            multiset<pair<int, int>> tmp; 
            int len=q.size();
            for(int i=0;i<len;++i)
            {
                TreeNode* f = q.front().first;
                int s = q.front().second;
                q.pop();
                tmp.insert({s, f->val});
                if (f->left) q.push({f->left,s-1});
                if (f->right) q.push({f->right,s+1});
            }
            for(auto itr : tmp)
                mp[itr.first].push_back(itr.second);
        }
        vector<vector<int>>res;
        for(auto x:mp) res.push_back(x.second);
        return res;
    }
};