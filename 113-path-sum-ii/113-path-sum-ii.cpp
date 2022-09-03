/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void rec(TreeNode* root , vector<int>temp , int target,vector<vector<int>>&res){
        if(root==NULL) return;
        if(!root->left && !root->right && target==root->val){
            temp.push_back(root->val);
            res.push_back(temp);
            return;
        }
        temp.push_back(root->val);
        rec(root->left,temp,target-root->val,res);
        rec(root->right,temp,target-root->val,res);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>res;
        rec(root, {}, targetSum, res);
        return res;
    }
};