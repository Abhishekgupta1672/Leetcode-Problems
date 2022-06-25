class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root) return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int sz = q.size();
            vector<int>level;
            for(int i=0;i<sz;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node->left != NULL) q.push(node->left);
                if(node->right!= NULL) q.push(node->right);
                level.push_back(node->val);
            }
            res.push_back(level);
        }
        return res;
    }
};