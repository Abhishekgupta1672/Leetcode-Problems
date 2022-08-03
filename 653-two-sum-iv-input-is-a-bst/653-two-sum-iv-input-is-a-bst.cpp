class Solution {
public:
    bool findTarget(TreeNode* root, int target) {
        stack<TreeNode*>st;
        vector<int>res;
        while(!st.empty() || root!=NULL)
        {
            if(root)
            {
                st.push(root);
                root = root->left;
            }
            else
            {
                root = st.top();
                st.pop();
                res.push_back(root->val);
                root = root->right;
            }
        }
        int i = 0 , j = res.size()-1;
        while(i<j)
        {
            if(res[i]+res[j]==target)
                return true;
            else if(res[i]+res[j]>target)
                j--;
            else
                i++;
        }
        return false;
    }
};