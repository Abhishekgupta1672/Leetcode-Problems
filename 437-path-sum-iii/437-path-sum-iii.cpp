class Solution {
public:
    int cnt = 0;
    void rec(TreeNode* root,long long ts){
        if(!root) return;
        if(root->val == ts){
            cnt++;
            // return;
        }
        rec(root->left,ts-root->val);
        rec(root->right,ts-root->val);
    }
    int pathSum(TreeNode* root, long long targetSum) {
        if(root){
            rec(root,targetSum);
            pathSum(root->left,targetSum);
            pathSum(root->right,targetSum);
        }    
        return cnt;
    }
};