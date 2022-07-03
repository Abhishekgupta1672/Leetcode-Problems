class Solution {
public:
    int i=0;
    TreeNode* bstFromPreorder(vector<int>& A , int bound = INT_MAX) {
        if(i==A.size() || A[i]>bound)
            return NULL;
        TreeNode* root = new TreeNode(A[i++]);
        root->left = bstFromPreorder(A , root->val);
        root->right = bstFromPreorder(A , bound);
        return root;
    }
};