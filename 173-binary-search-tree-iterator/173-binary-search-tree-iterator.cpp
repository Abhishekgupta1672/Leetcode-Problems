class BSTIterator {
public:
    stack<TreeNode*>st;
    void inorder(TreeNode* root)
    {
        while(root!=NULL)
        {
            st.push(root);
            root = root->left;
        }
    }
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    int next() {
        TreeNode* top = st.top();
        st.pop();
        inorder(top->right);
        return top->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};