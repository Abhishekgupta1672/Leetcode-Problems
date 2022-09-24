class Solution {
public:
    void rec(TreeNode* root, vector<int>temp,int ts,vector<vector<int>>&res){
        if(!root) return ;
        if(!root->right && !root->left && ts == root->val){
            temp.push_back(root->val);
            res.push_back(temp);
            return;
        }
        temp.push_back(root->val);
        rec(root->left,temp,ts-root->val,res);
        rec(root->right,temp,ts-root->val,res);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>res;
        rec(root,{},targetSum,res);
        return res;
    }
};