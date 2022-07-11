class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        if(!root) return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int sz = q.size();
            for(int i=0;i<sz;i++)
            {
                TreeNode* cur = q.front();
                q.pop();
                if(i==0) res.push_back(cur->val);
                if(cur->right != NULL) q.push(cur->right);
                if(cur->left != NULL) q.push(cur->left);
            }
        }
      return res;  
    }
};