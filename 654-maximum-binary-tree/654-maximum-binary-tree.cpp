class Solution {
public:
    int max(vector<int>nums , int l , int r)
    {
        int maxi = l;
        for(int i=l;i<r;i++)
            if(nums[maxi] < nums[i])
                maxi = i;
        return maxi;
    }
    TreeNode* construct(vector<int>&nums , int left , int right)
    {
        if(left==right) return NULL;
        int maxi = max(nums,left,right);
        TreeNode* root = new TreeNode(nums[maxi]);
        root->left = construct(nums , left , maxi);
        root->right = construct(nums , maxi+1 , right);
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return construct(nums,0,nums.size());
    }
};