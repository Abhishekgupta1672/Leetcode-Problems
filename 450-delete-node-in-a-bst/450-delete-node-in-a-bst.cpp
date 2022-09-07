
class Solution {
public:
    // TreeNode* del(TreeNode* &root){
    //     if(!root->left) return root;
    //     return del(root->left);
    // }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        if(root->val > key){
            root->left = deleteNode(root->left,key);
        }
        else if(root->val < key){
            root->right = deleteNode(root->right,key);
        }
        if(root->val == key){
            if(!root->left) return root->right;
            if(!root->right) return root->left;
            else{
                if(!root->left && !root->right){
                    return NULL;
                }
                if(!root->left || !root->right){
                    TreeNode* ptr = root->right?root->right:root->left;
                    return ptr;
                }
                TreeNode* itr = root->right;
                while(itr->left){
                    itr = itr->left;
                }
                swap(itr->val,root->val);
                root->right = deleteNode(root->right,itr->val);
            }
        }
        return root;
    }
};