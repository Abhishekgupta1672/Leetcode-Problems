class Solution {
public:
    TreeNode* solve(int l , int r , vector<int>&nums){
        int mid = (l+r)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        while(l<=r)
        {
            root->left = solve(l,mid-1,nums);
            root->right = solve(mid+1,r,nums);
            return root;
        }
        return NULL;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        TreeNode* root = solve(0,n-1,nums);
        return root;
    }
};