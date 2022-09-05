class Solution {
public:
    void solve(Node* root , vector<int>&res){
        if(!root) return;
        res.push_back(root->val);
        for(Node* child : root->children){
            solve(child,res);
        }
    }
    
    vector<int> preorder(Node* root) {
        vector<int>res;
        solve(root,res);
        return res;
    }
};