class Solution {
public:
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*>st;
        TreeNode* temp=NULL;
        while(!st.empty() || root!= NULL)
        {
            if(root)
            {
                st.push(root);
                root = root->left;
            }
            else
            {
                root = st.top();
                st.pop();
                if(temp!=NULL && root->val <= temp->val)
                    return false;
                temp = root;
                root = root->right;
            }
        }
        return true;
    }
};