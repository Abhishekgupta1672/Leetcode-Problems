class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int sz = q.size();
            Node* prev = NULL;
            for(int i=0;i<sz;i++)
            {
                Node* node = q.front();
                q.pop();
                node->next = prev;
                prev = node;
                if(node->right) q.push(node->right);
                if(node->left) q.push(node->left);
            }
        }
        return root;
    }
};