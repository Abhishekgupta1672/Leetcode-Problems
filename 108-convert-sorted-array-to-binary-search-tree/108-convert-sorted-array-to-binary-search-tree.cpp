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
    TreeNode* partition(int l , int r , vector<int>&nums)
    {
        int mid = l+(r-l)/2;
        if(l<=r)
        {
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = partition(l , mid-1 , nums);
            root->right = partition(mid+1 , r , nums);
            return root;
        }
        return NULL;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        TreeNode* root = partition(0 , n-1 , nums);
        return root;
    }
};