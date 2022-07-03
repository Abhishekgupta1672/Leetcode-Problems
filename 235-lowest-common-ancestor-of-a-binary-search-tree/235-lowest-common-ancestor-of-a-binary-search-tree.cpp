class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* cur = root;
        while(true)
        {
            if(cur->val < p->val && cur->val < q->val)
                cur = cur->right;
            else if(cur->val > p->val && cur->val > q->val)
                cur = cur->left;
            else
                break;
        }
        return cur;
    }
};