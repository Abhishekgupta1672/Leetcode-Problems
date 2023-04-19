class Solution {
public:
    int maxS = 0;
    void solve(TreeNode* root, int step, int dir){
        if(!root) return;
        maxS = max(step,maxS);
        if(dir == 1){
            solve(root->left,step+1,0);
            solve(root->right,1,1);
        }
        else{
            solve(root->right,step+1,1);
            solve(root->left,1,0);
        }
    }
    
    int longestZigZag(TreeNode* root) {
        solve(root->left,1,0);
        solve(root->right,1,1);
        return maxS;
    }
};