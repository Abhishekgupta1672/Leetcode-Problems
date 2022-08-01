class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        queue<pair<TreeNode* ,int>>q;
        q.push({root , 0});
        int maxWidth = 0;
        while(!q.empty())
        {
            int sz = q.size();
            int first , last;
            int temp = q.front().second;
            for(int i=0;i<sz;i++)
            {
                TreeNode* node = q.front().first;
                int curEle = q.front().second-temp;
                q.pop();
                if(i==0) first = curEle;
                if(i==sz-1) last = curEle;
                if(node->left)
                    q.push({node->left , (long long)curEle*2+1});
                if(node->right)
                    q.push({node->right , (long long)curEle*2+2});
            }
            maxWidth = max(maxWidth , last-first+1);
        }
        return maxWidth;
    }
};