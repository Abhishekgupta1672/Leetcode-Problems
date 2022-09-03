class Solution {
public:
    long long cnt = 0;
    
    void dfs(TreeNode* root, long long target){
        if(!root)return;
        if(root->val==target){
            cnt++;
        }
        dfs(root->left,target-root->val);
        dfs(root->right,target-root->val);
    }
    
    long long pathSum(TreeNode* root, long long sum) {
        if(root){
            dfs(root,sum);
            pathSum(root->left,sum);
            pathSum(root->right,sum);
        }
        return cnt;
    }
};