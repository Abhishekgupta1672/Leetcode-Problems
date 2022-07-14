class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if(!root->left && !root->right)
            return root->val;
        int left = evaluateTree(root->left);
        int right = evaluateTree(root->right);
        if(root->val==2)
            return left||right;
        else if(root->val==3)
            return left&&right;
        return 0;
    }
};