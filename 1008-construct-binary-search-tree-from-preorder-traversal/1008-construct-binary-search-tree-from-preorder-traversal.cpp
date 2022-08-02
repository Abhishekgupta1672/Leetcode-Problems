class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& pre) {
        TreeNode* root = new TreeNode(pre[0]);
        if(pre.size()==1) return root;
        for(int i=1;i<pre.size();i++)
        {
            bool done = false;
            TreeNode* cur = root;
            while(done==false)
            {
                if(cur->val < pre[i])
                {
                    if(cur->right==NULL)
                    {
                        cur->right = new TreeNode(pre[i]);
                        done = true;
                    }
                    else 
                        cur = cur->right;
                }
                else
                {
                    if(cur->left==NULL)
                    {
                        cur->left = new TreeNode(pre[i]);
                        done = true;
                    }
                    else 
                        cur = cur->left;
                }
            }
        }
        return root;
    }
};