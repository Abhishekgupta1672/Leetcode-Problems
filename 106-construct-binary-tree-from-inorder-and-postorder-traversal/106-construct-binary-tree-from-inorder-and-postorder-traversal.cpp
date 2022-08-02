class Solution {
public:
    TreeNode* solve(vector<int>&in,int is,int ie,vector<int>&post,int ps,int pe,map<int,int>&mp)
    {
        if(ps>pe || is>ie) return NULL;
        TreeNode* root = new TreeNode(post[pe]);
        int inroot = mp[root->val];
        int lft = inroot-is;
        root->left = solve(in,is,inroot-1,post,ps,ps+lft-1,mp);
        root->right = solve(in,inroot+1,ie,post,ps+lft,pe-1,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        if(in.size() != post.size()) return NULL;
        map<int,int>mp;
        for(int i=0;i<in.size();i++)
        {
            mp[in[i]] = i;
        }
        return solve(in,0,in.size()-1,post,0,post.size()-1,mp);
    }
};