class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<int>>mp;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            multiset<pair<int,int>>tmp;
            int sz = q.size();
            for(int i=0;i<sz;i++){
                TreeNode* f = q.front().first;
                int s = q.front().second;
                q.pop();
                tmp.insert({f->val,s});
                // mp[s].push_back(f->val);
                if(f->left) q.push({f->left,s-1});
                if(f->right) q.push({f->right,s+1});
            }
            for(auto x: tmp)
                mp[x.second].push_back(x.first);
        }
        vector<vector<int>>res;
        for(auto x:mp){
            res.push_back(x.second);
        }
        return res;
    }
};