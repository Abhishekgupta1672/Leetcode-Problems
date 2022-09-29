class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>res,temp;
        while(head != NULL){
            res.push_back(head->val);
            head = head->next;
        }
        for(int i=res.size()-1;i>=0;i--){
            int val = res[i];
            while(!temp.empty() && temp.back()<=res[i]) temp.pop_back();
            res[i] = temp.empty()?0:temp.back();
            temp.push_back(val);
        }
        return res;
    }
};