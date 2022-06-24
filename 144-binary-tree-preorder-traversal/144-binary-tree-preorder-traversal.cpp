class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root) return {};
        stack<TreeNode*> s;
        s.push(root);
        vector<int> res;
        while(!s.empty()){
            res.push_back(s.top()->val);
            root = s.top();
            s.pop();
            if(root->right) s.push(root->right);
            if(root->left) s.push(root->left);
        }
        return res;
    }
};