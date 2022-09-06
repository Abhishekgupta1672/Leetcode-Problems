class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            for(int i=0;i<q.size();i++){
                TreeNode* tp = q.front();
                q.pop();
                if(tp->left){
                    if(tp->left->val != tp->val) return false;
                    else q.push(tp->left);
                }
                if(tp->right){
                    if(tp->right->val != tp->val) return false;
                    else q.push(tp->right);
                }
            }
        }
        return true;
    }
};