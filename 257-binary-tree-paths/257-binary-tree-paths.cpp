class Solution {
public:
    void rec(TreeNode* root , vector<string>&res,string s){
        if(!root->left && !root->right){
            res.push_back(s);
            return;
        }
        if(root->left) rec(root->left,res,s+"->"+to_string(root->left->val));
        if(root->right) rec(root->right,res,s+"->"+to_string(root->right->val));
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        if(!root) return res;
        rec(root,res,to_string(root->val));
        return res;
    }
};