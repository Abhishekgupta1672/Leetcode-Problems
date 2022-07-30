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
                TreeNode* tmp = q.front();
                q.pop();
                if(i==0)
                    res.push_back(tmp->val);
            if(tmp->right) q.push(tmp->right);
            if(tmp->left) q.push(tmp->left);
            }
        }
        return res;
    }
};