class Solution {
public:
    TreeNode* construct(vector<int>&preorder,int ps,int pe,vector<int>&postorder,int pps,int ppe,map<int,int>&mp)
    {
        if(ps>pe || pps>ppe) return NULL;
        if(ps == pe)
            return new TreeNode(preorder[ps]); 
        TreeNode* root = new TreeNode(preorder[ps]);
        int preleft = preorder[ps+1];
        int numsleft = mp[preleft]+1-pps;
        root->left = construct(preorder,ps+1,ps+numsleft,postorder,pps,pps+numsleft-1,mp);
        root->right = construct(preorder,ps+numsleft+1,pe,postorder,pps+numsleft,ppe-1,mp);
        return root;
    }
    
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        if(preorder.size() == 0 && postorder.size() == 0)
            return NULL;
        if(preorder.size() == 1 && postorder.size() == 1)
            return new TreeNode(preorder[0]); 
        map<int,int>mp;
        for(int i=0;i<postorder.size();i++)
            mp[postorder[i]]=i;
        return construct(preorder,0,preorder.size()-1,postorder,0,postorder.size()-1,mp);
    }
};