class Solution {
public:
    void rec(TreeNode *root,int level,vector<double> &sum,vector<int> &cnt){
        if(root == NULL) return;
        if(sum.size() <= level){
            sum.push_back(0);
            cnt.push_back(0);
        }
        sum[level] += root->val;
        cnt[level]++;
        rec(root->left,level+1,sum,cnt);
        rec(root->right,level+1,sum,cnt);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> sum;
        vector<int> cnt;
        rec(root,0,sum,cnt);
        for(int i = 0 ; i < sum.size() ; i++){
            sum[i]/=cnt[i];
        }
        return sum;
    }
};