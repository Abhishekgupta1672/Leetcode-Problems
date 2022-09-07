
class Solution {
public:
    TreeNode* del(TreeNode* &root){
        if(!root->left) return root;
        return del(root->left);
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        if(root->val > key) root->left = deleteNode(root->left,key);
        else if(root->val < key) root->right = deleteNode(root->right,key);
        if(root->val == key){
            if(!root->left) return root->right;
            if(!root->right) return root->left;
            else{
                TreeNode* newNode = del(root->right);
                int tmp = newNode->val;
                root->val = tmp;
                root->right = deleteNode(root->right,tmp);
            }
        }
        return root;
    }
};