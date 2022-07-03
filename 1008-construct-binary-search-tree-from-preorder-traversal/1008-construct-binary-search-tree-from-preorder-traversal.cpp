class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& A) {
        TreeNode * root = new TreeNode(A[0]);
        if(A.size()==1)
            return root;
        for(int i=1;i<A.size();i++)
        {
            bool done = false;
            TreeNode* cur = root;
            while(done==false)
            {
                if(cur->val > A[i])
                {
                    if(cur->left==NULL)
                    {
                        cur->left = new TreeNode(A[i]);
                        done = true;
                    }
                    else
                        cur = cur->left;
                }
                else
                {
                    if(cur->right==NULL)
                    {
                        cur->right = new TreeNode(A[i]);
                        done = true;
                    }
                    else
                        cur = cur->right;
                }
            }
        }
        return root;
    }
};