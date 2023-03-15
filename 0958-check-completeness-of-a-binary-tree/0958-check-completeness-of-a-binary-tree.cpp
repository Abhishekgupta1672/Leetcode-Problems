class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        TreeNode* prev = root;
        while(!q.empty()){
            TreeNode* tmp = q.front();
            q.pop();
            if(tmp != NULL){
                if(prev == NULL){
                    return false;
                }
                q.push(tmp->left);
                q.push(tmp->right);
            }
            prev = tmp;
        }
        return true;
    }
};