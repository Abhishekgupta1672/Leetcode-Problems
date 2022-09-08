class Solution {
public:
    long int ans = 0 , total = 0;
    int solve(TreeNode* root){
        if(!root) return 0;
        int cur = solve(root->left)+solve(root->right)+root->val;
        ans = max(ans,cur*(total-cur));
        return cur;
    }
    
    long int maxProduct(TreeNode* root) {
        total = solve(root);
        solve(root);
        return ans%int(1e9+7);
    }
};