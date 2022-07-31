class Solution {
public:
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>res;
        while(!st.empty() || root!=NULL)
        {
            if(root)
            {
                st.push(root);
                root = root->left;
            }
            else
            {
                TreeNode* temp = st.top();
                st.pop();
                res.push_back(temp->val);
                root = temp->right;
            }
        }
        for(int i=1;i<res.size();i++)
        {
            if(res[i-1] >= res[i]) return false;
        }
        return true;
    }
};