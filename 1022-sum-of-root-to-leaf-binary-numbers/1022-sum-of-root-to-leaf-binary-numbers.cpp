class Solution {
public:
    int res = 0;
    void rec(TreeNode* root , int num){
        if(root != NULL){
            num = (num<<1)+root->val;
            if(root->left==NULL && root->right==NULL)
                res+=num;
            rec(root->left,num);
            rec(root->right,num);   
        }
    }
    
    int sumRootToLeaf(TreeNode* root) {
        rec(root,0);
        return res;
    }
};