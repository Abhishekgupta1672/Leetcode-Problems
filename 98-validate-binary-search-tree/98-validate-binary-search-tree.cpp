/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        TreeNode* temp = NULL;
        stack<TreeNode*>st;
        while(!st.empty() || root!=NULL)
        {
            if(root != NULL)
            {
                st.push(root);
                root = root->left;
            }
            else
            {
                root = st.top();
                st.pop();
                if(temp!=NULL && root->val <=temp->val)
                    return false;
                temp = root;
                root = root->right;
            }
        }
        return true;
    }
};