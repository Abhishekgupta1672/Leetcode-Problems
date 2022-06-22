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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2){
            return NULL;
        }else if(!root1){
            return root2;
        }else if(!root2) return root1;
        TreeNode *newNode = new TreeNode(0);
        if(root1) newNode->val += root1->val;
        if(root2) newNode->val += root2->val;
        if(root1->left && root2->left){
            newNode->left = mergeTrees(root1->left,root2->left);
        }else if(root1->left){
            newNode->left = root1->left;
        }else{
            newNode->left = root2->left;
        }
        if(root1->right && root2->right){
            newNode->right = mergeTrees(root1->right,root2->right);
        }else if(root1->right){
            newNode->right = root1->right;
        }else{
            newNode->right = root2->right;
        }
        return newNode;
    }
};