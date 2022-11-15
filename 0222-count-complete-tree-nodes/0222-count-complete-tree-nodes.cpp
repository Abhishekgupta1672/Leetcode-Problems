class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int l = 1 , r = 1;
        TreeNode* pl = root , *pr = root;
        while(pl = pl->left) l++;
        while(pr = pr->right) r++;
        if(l==r) return pow(2,l)-1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};