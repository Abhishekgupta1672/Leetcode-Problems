class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>res;
        for(auto x:lists){
            while(x != NULL){
                res.push_back(x->val);
                x = x->next;
            }
        }
        sort(res.rbegin(),res.rend());
        ListNode* head = NULL;
        for(int i=0;i<res.size();i++){
            ListNode* newHead = new ListNode(res[i]);
            newHead->next = head;
            head = newHead;
        }
        return head;
    }
};