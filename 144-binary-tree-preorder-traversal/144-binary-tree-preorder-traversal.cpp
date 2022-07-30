class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>res;
        while(!st.empty() || root!= NULL)
        {
            if(root)
            {
                st.push(root);
                res.push_back(root->val);
                root = root->left;
            }
            else
            {
                TreeNode* tmp = st.top();
                st.pop();
                root = tmp->right;
            }
        }
        return res;
    }
};