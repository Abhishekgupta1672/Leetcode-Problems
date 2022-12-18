class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>s1,s2;
        vector<int>res;
        s1.push(root);
        if(!root) return res;
        while(!s1.empty()){
            TreeNode* tp = s1.top();
            s1.pop();
            s2.push(tp);
            if(tp->left) s1.push(tp->left);
            if(tp->right) s1.push(tp->right);
        }
        while(!s2.empty()){
            TreeNode* tp = s2.top();
            s2.pop();
            res.push_back(tp->val);
        }
        return res;
    }
};