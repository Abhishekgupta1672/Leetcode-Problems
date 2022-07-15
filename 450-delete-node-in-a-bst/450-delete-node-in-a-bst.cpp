class Solution {
public:
    TreeNode* solve(vector<int>&res , int l , int r)
    {
        int mid = l+(r-l)/2;
        if(l<=r)
        {
            TreeNode* root = new TreeNode(res[mid]);
            root->left = solve(res,l,mid-1);
            root->right = solve(res,mid+1,r);
            return root;
        }
        return NULL;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        else if(!root->left && !root->right && root->val == key) return NULL;
        else if(!root->left && !root->right) return root; 

        vector<int>res;
        stack<TreeNode*>st;
        while(root!=NULL || !st.empty())
        {
            if(root != NULL)
            {
                st.push(root);
                root = root->left;
            }
            else
            {
                root = st.top();
                st.pop();
                res.push_back(root->val);
                root = root->right;
            }
        }
        vector<int>result;
        for(auto i:res)
        {
            if(i==key) continue;
            result.push_back(i);
        }
        TreeNode* node = solve(result,0,result.size()-1);
        return node;
    }
};