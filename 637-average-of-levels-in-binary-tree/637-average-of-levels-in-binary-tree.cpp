class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int sz = q.size();
            double sum = 0 , cnt = 0;
            for(int i=0;i<sz;i++){
                TreeNode* tmp = q.front();
                q.pop();
                sum+=tmp->val;
                cnt++;
                if(tmp->left) q.push(tmp->left);
                if(tmp->right) q.push(tmp->right);
            }
            res.push_back(sum/cnt);
        }
        return res;
    }
};