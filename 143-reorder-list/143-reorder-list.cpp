class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head) return;
        ListNode* temp = head;
        stack<ListNode*>st;
        int sz = 0;
        while(temp!=NULL)
        {
            st.push(temp);
            temp = temp->next;
            sz++;
        }
        ListNode* newTemp = head;
        for(int i=0;i<sz/2;i++)
        {
            ListNode* last = st.top();
            st.pop();
            last->next = newTemp->next;
            newTemp->next = last;
            newTemp = newTemp->next->next;
        }
        newTemp->next = NULL;
    }
};