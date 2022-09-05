class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int>res;
        if(!root) return res;
        stack<Node*>st;
        st.push(root);
        while(!st.empty()){
            Node* tmp = st.top();
            st.pop();
            res.push_back(tmp->val);
            for(int i=tmp->children.size()-1;i>=0;i--){
                if(tmp->children[i] != NULL) st.push(tmp->children[i]);
            }
        }
        return res;
    }
};