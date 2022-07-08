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
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        if(inorder.size() != preorder.size()) return NULL;
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;
        return constructTree(preorder, 0, preorder.size()-1, inorder, 0 ,inorder.size()-1, mp);
    }
};