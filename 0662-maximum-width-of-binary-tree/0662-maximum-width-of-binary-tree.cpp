class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode* , int>>q;
        q.push({root , 0});
        int maxw = 0;
        while(!q.empty())
        {
            int sz = q.size();
            int first , last;
            int curEle = q.front().second;
            for(int i=0;i<sz;i++)
            {
                TreeNode* node = q.front().first;
                int temp = q.front().second-curEle;
                q.pop();
                if(i==0) first = temp;
                if(i==sz-1) last = temp;
                if(node->left) 
                    q.push({node->left , (long long)temp*2+1});
                if(node->right)
                    q.push({node->right , (long long)temp*2+2});
            }
            maxw = max(maxw , last-first+1);
        }
        return maxw;
    }
};