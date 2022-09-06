class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        bool l = (root->left==NULL || (root->val==root->left->val && isUnivalTree(root->left)));
        bool r = (root->right==NULL || (root->val==root->right->val && isUnivalTree(root->right)));
        return l && r;
    }
};