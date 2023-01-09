class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>res;
        while(root != NULL || !st.empty()){
            if(root){
                res.push_back(root->val);
                st.push(root);
                root = root->left;
            }
            else{
                TreeNode* tmp = st.top();
                st.pop();
                root = tmp;
                root = root->right;
            }
        }
        return res;
    }
};