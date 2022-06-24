class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>res;
        stack<TreeNode*>st;
        while(root || !st.empty())
        {
            if(root)
            {
                st.push(root);
                res.push_back(root->val);
                root = root->left;
            }
            else
            {
                root = st.top();
                st.pop();
                root = root->right;
            }
        }
        return res;
    }
};