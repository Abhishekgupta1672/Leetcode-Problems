class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root) return res;
        queue<TreeNode*>q;
        q.push(root);
        int cnt=0;
        while(!q.empty())
        {
            int sz = q.size();
            vector<int>v;
            for(int i=0;i<sz;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                v.push_back(node->val);
                if(i==sz-1)
                    cnt+=1;
            }
            if(cnt%2==0) reverse(v.begin() , v.end());
            res.push_back(v);
        }
        return res;
    }
};