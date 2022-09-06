class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int sum = 0;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int res = 0;
            int sz = q.size();
            for (int i =0;i<sz;i++) {
                TreeNode* node = q.front();
                q.pop();
                res += node->val;
                if (node->right) q.push(node->right);
                if (node->left)  q.push(node->left);
            }
            sum = res;
        }
        return sum; 
    }
};