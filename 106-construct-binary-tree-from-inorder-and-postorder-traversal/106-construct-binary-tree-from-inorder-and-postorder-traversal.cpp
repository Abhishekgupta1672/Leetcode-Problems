class Solution {
public:
    TreeNode* construct(vector<int>&inorder,int is , int ie , vector<int>&postorder, int ps , int pe , map<int,int>&mp)
    {
        if(is>ie || ps>pe) return NULL;
        TreeNode* root = new TreeNode(postorder[pe]);     
        int inroot = mp[postorder[pe]];
        int numsleft = inroot-is;
        root->left = construct(inorder,is,inroot-1,postorder,ps,ps+numsleft-1,mp);
        root->right = construct(inorder,inroot+1,ie,postorder,ps+numsleft,pe-1,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size() != postorder.size()) return NULL;
        map<int , int>mp;
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]] = i;
        return construct(inorder,0,inorder.size()-1 , postorder,0,postorder.size()-1,mp);
    }
};