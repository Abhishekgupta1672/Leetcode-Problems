class Solution {
public:
    TreeNode* getLca(TreeNode* root , int start , int end)
    {
        if(!root) return NULL;
        if(root->val == start || root->val == end) return root;
        TreeNode* left = getLca(root->left,start,end);
        TreeNode* right = getLca(root->right, start,end);
        if(left && right) return root;
        return left?left:right;
    }
    
    bool traverse(TreeNode* lca , string &start , int value)
    {
        if(!lca) return false;
        if(lca->val == value) return true;
        start.push_back('L');
        if(traverse(lca->left,start,value)) return true;
        start.pop_back();
        start.push_back('R');
        if(traverse(lca->right,start,value)) return true;;
        start.pop_back();
        return false;
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        TreeNode* lca = getLca(root,startValue,destValue);
        
        string lca_to_start = "" , lca_to_dest = "";
        traverse(lca,lca_to_start,startValue);
        traverse(lca,lca_to_dest, destValue);
        for(auto &c : lca_to_start)
            c = 'U';
        return lca_to_start+lca_to_dest;
    }
};