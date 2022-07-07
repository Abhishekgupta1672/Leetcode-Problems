class Solution {
public:
    bool isIdentical(TreeNode* s , TreeNode* t)
    {
        if(!s || !t)
            return s==t;
        return (s->val==t->val) && isIdentical(s->left , t->left) && isIdentical(s->right , t->right);
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;
        if(!subRoot) return false;
        if(isIdentical(root , subRoot)) return true;
        return isSubtree(root->left , subRoot) || isSubtree(root->right , subRoot);
    }
};