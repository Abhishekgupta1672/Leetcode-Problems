class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>res;
        while(!st.empty() || root){
            if(root){
                st.push(root);
                root = root->left;
            }
            else{
                TreeNode* tmp = st.top();
                st.pop();
                res.push_back(tmp->val);
                root = tmp;
                root = root->right;
            }
        }
        return res;
    }
};