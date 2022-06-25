class Solution {
public:
    bool issymmetric(TreeNode* left , TreeNode* right)
    {
        if(left==NULL || right==NULL)
            return left==right;
        else
            return (left->val==right->val) &&(issymmetric(left->left , right->right) && issymmetric(left->right , right->left));
    }
    bool isSymmetric(TreeNode* root) {
        return root==NULL || issymmetric(root->left , root->right);
    }
};