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
    void rec(TreeNode *root,int maxE,int&cnt){
        if(!root) return;
        if(root->val >= maxE){
            cnt++;
        }
        rec(root->left,max(maxE,root->val),cnt);
        rec(root->right,max(maxE,root->val),cnt);
    }
    int goodNodes(TreeNode* root) {
        int cnt = 0;
        rec(root,INT_MIN,cnt);
        return cnt;
    }
};