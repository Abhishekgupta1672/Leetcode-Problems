
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p || !q)
            return p==q;
        queue<TreeNode*>q1 , q2;
        q1.push(p);
        q2.push(q);
        while(!q1.empty() && !q2.empty())
        {
            TreeNode* t1 = q1.front();
            q1.pop();
            TreeNode* t2 = q2.front();
            q2.pop();
            if(t1->val != t2->val) 
                return false;
            if((t1->left ==NULL && t2->left) || (t1->left && t2->left==NULL))
                return false;
            if((t1->right ==NULL && t2->right!=NULL) || (t1->right !=NULL && t2->right==NULL))
                return false;
            if(t1->left && t2->left)
            {
                q1.push(t1->left);
                q2.push(t2->left);
            }
            if(t1->right && t2->right)
            {
                 q1.push(t1->right);
                 q2.push(t2->right);
            }
           }
        return true;
    }
};