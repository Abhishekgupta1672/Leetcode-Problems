class Solution {
public:
    int ans;
    int rec(TreeNode* root){
        if(root == NULL) return 0;
        int left = rec(root->left);
        int right = rec(root->right);
        int l = 0 , r = 0;
        if(root->left != NULL && root->val == root->left->val)
            l += left+1;
        if(root->right != NULL && root->val == root->right->val)
            r += right+1;
        ans = max(ans,l+r);
        return max(l,r);
    }
    
    int longestUnivaluePath(TreeNode* root) {
        ans = 0;
        rec(root);
        return ans;
    }
};