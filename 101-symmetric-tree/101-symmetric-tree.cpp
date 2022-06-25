class Solution {
public:
    bool issymmetric(TreeNode* left , TreeNode* right)
    {
        if(left==NULL || right==NULL)
            return left==right;
        if(left->val != right->val)
            return false;
        else
            return (issymmetric(left->left , right->right) && issymmetric(left->right , right->left));
    }
    bool isSymmetric(TreeNode* root) {
        return root==nullptr || issymmetric(root->left , root->right);
    }
};