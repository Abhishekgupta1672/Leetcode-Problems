class Solution {
public:
    bool solve(TreeNode* root)
    {
        if(!root)
            return 0;
        int left=solve(root->left);
        int right=solve(root->right);
        
        if(root->left==NULL && root->right==NULL)
            return root->val;
        if(root->val==2)
            return left || right;
        if(root->val==3)
            return left && right;
        
        return 0;
    }
    bool evaluateTree(TreeNode* root) {
        return solve(root);
    }
};