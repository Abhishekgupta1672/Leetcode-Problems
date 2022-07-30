
class Solution {
    public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>res;
        stack<TreeNode*>s1,s2;
        if(!root) return res;
        s1.push(root);
        while(!s1.empty())
        {
            TreeNode* top = s1.top();
            s1.pop();
            s2.push(top);
            if(top->left) s1.push(top->left);
            if(top->right) s1.push(top->right);
        }
        while(!s2.empty())
        {
            TreeNode* top = s2.top();
            s2.pop();
            res.push_back(top->val);
        }
        return res;
    }
};