class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return NULL;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int sz = q.size();
            Node* prev = NULL;
            for(int i=0;i<sz;i++)
            {
                Node* cur = q.front();
                q.pop();
                cur->next = prev;
                prev = cur;
                if(cur->right) q.push(cur->right);
                if(cur->left) q.push(cur->left);
            }
        }
        return root;
    }
};