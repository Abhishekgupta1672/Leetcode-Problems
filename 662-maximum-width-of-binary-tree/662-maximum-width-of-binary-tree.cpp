class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int ans = 0;
        queue<pair<TreeNode* , int>>q;
        q.push({root , 0});
        while(!q.empty())
        {
            int sz = q.size();
            int temp = q.front().second;
            int first , last;
            for(int i=0;i<sz;i++)
            {
                int curEle = q.front().second - temp;
                TreeNode* node = q.front().first;
                q.pop();
                if(i==0) first = curEle;
                if(i== sz-1) last = curEle;
                if(node->left) q.push({node->left , (long long)curEle*2 + 1});
                if(node->right) q.push({node->right , (long long)curEle*2 + 2});
            }
            ans = max(ans ,last-first+1);
        }
        return ans;
    }
};