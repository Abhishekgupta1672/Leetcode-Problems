class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>res;
        if(!root) return res;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>ans;
            int sz = q.size();
            for(int i=0;i<sz;i++){
                Node* cur = q.front();
                q.pop();
                ans.push_back(cur->val);
                for(Node* ch : cur->children){
                    q.push(ch);
                }
            }
            res.push_back(ans);
        }
        return res;
    }
};