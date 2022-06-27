class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>res;
        if(!root)
            return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int sz = q.size();
            vector<int>temp;
            for(int i=0;i<sz;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                temp.push_back(node->val);
            }
            res.push_back(temp);
        }
        reverse(res.begin() , res.end());
        return res;
    }
};