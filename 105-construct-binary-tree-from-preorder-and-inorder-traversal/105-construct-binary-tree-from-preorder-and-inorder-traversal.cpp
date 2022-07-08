class Solution {
public:
    TreeNode* constructTree(vector<int>& preorder,int preStart,int preEnd, vector<int>& inorder,int inStart,int inEnd,map<int,int>&mp)
    {
        if(preStart>preEnd || inStart>inEnd) return NULL;
        TreeNode* root = new TreeNode(preorder[preStart]);
        int inRoot = mp[root->val];
        int numsleft = inRoot - inStart;
        root->left = constructTree(preorder, preStart + 1, preStart + numsleft, inorder,inStart, inRoot - 1, mp);
        root->right = constructTree(preorder, preStart + numsleft + 1, preEnd, inorder,inRoot + 1, inEnd, mp);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preStart = 0 , preEnd = preorder.size()-1;
        int inStart = 0 , inEnd = inorder.size()-1;
        map<int,int>mp;
        for(int i=inStart;i<=inEnd;i++)
            mp[inorder[i]]=i;
        return constructTree(preorder, preStart, preEnd, inorder, inStart, inEnd, mp);
    }
};