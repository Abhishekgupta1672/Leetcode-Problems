class Solution {
public:
    void solve(TreeNode* root , vector<string>&res , string x)
    {
        if(!root->left && !root->right)
        {
            res.push_back(x);
            return;
        }
        if(root->left) solve(root->left,res,x+to_string(root->left->val));
        if(root->right) solve(root->right,res,x+to_string(root->right->val));
    }
    
    int sumNumbers(TreeNode* root) {
        vector<string>res;
        solve(root,res,to_string(root->val));
        int ans = 0;
        for(int i=0;i<res.size();i++)
        {
            ans+=stoi(res[i]);
        }
        return ans;
    }
};