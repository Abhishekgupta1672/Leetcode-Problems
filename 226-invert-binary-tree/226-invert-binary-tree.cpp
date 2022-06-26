class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return nullptr;
        TreeNode* p = root;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty())
        {
            root = st.top();
            st.pop();
            if(root->left)
            st.push(root->left);
            if(root->right)
            st.push(root->right);
            swap(root->right , root->left);
        }
        return p;
    }
};