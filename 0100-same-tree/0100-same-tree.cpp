class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p || !q) return p==q;
        queue<TreeNode*>q1;
        q1.push(p);
        q1.push(q);
        while(!q1.empty())
        {
            TreeNode* l = q1.front();
            q1.pop();
            TreeNode* r = q1.front();
            q1.pop();
            if(l->val != r->val) return false;
            if(l->left && r->left) {
                q1.push(l->left);
                q1.push(r->left);
            }
            else if(l->left || r->left) return false;
            if(l->right && r->right) {
                q1.push(l->right);
                q1.push(r->right);
            }
            else if(l->right || r->right) return false;
        }
        return true;
    }
};