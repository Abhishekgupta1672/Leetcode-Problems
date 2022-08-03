class NodeValue{
    public:
    int maxNode , minNode , msum;
    NodeValue(int maxNode , int minNode , int msum){
        this->maxNode = maxNode;
        this->minNode = minNode;
        this->msum = msum;
    }
};

class Solution {
public:
    int ans = 0;
    NodeValue maxSumBSTHelper(TreeNode* root)
    {
        if(!root) return NodeValue(INT_MIN,INT_MAX,0);
        
        auto left = maxSumBSTHelper(root->left);
        auto right = maxSumBSTHelper(root->right);
        
        if(left.maxNode < root->val && right.minNode > root->val)
        {
            int sum = left.msum + right.msum + root->val;
            ans = max(ans,sum);
            return NodeValue(max(root->val ,right.maxNode),min(root->val ,left.minNode),sum);
        }
        else
        {
            return NodeValue(INT_MAX,INT_MIN,max(left.msum,right.msum)); 
        }
    }
    
    int maxSumBST(TreeNode* root) {
        NodeValue ans1 = maxSumBSTHelper(root);
        return ans;
    }
};