class Solution {
public:
    void rec(TreeNode* root, vector<int>&res){
        if(!root) return;
        rec(root->left,res);
        res.push_back(root->val);
        rec(root->right,res);
    }
    
    int minDiffInBST(TreeNode* root) {
        vector<int>res;
        rec(root,res);
        int mini = INT_MAX;
        for(int i=0;i<res.size()-1;i++){
            mini = min(mini,res[i+1]-res[i]);
        }
        return mini;
    }
};