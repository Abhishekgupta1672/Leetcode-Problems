class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp = head , *prev =NULL;
        int i=1;
        while(i<left)
        {
            prev = temp;
            temp = temp->next;
            i++;
        }
        ListNode* p = NULL , *cur = temp , *next = NULL;
        for(int j=left;j<=right;j++)
        {
            next = cur->next;
            cur->next = p;
            p = cur;
            cur = next;
        }
        if(prev!=NULL)
        {
            cur = prev->next;
            cur->next = next;
            prev->next = p;
            return head;
        }
        head->next = next;
        return p;
    }
};