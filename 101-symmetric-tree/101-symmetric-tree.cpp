class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*>q1,q2;
        q1.push(root);
        q2.push(root);
        while(!q1.empty() && !q2.empty())
        {
            TreeNode* left = q1.front();
            q1.pop();
            TreeNode* right = q2.front();
            q2.pop();
            if(left->val != right->val) return false;
            if(left->left && right->right)
            {
                q1.push(left->left);
                q2.push(right->right);
            }
            else if(left->left || right->right)
                return false;
            if(left->right && right->left)
            {
                q1.push(left->right);
                q2.push(right->left);
            }
            else if(left->right || right->left)
                return false;
        }
        return true;
    }
};