class Solution {
public:
    unordered_map<int,int>mp;
    void dls(TreeNode* root , int level){
        if(!root) return;
        mp[level]+=root->val;
        dls(root->left,level+1);
        dls(root->right,level+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        dls(root,0);
        int maxi = INT_MIN ,res = 0;
        for(auto i : mp){
            if(i.first > maxi){
                maxi = i.first;
                res = i.second;
            }
        }
        return res;
    }
};