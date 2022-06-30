class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        q.push(root);
        while(!q.empty())
        {
            TreeNode* l = q.front();
            q.pop();
            TreeNode* r = q.front();
            q.pop();
            if(l->val != r->val) return false;
            if(l->left && r->right) 
            {
                q.push(l->left);
                q.push(r->right);
            }
            else if(l->left || r->right)
                return false;
            if(l->right && r->left)
            {
                q.push(l->right);
                q.push(r->left);
            }
            else if(l->right || r->left)
                return false;
        }
        return true;
    }
};