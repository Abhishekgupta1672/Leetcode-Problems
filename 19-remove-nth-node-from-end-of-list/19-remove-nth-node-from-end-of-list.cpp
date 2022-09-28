class Solution {
public:
    int length(ListNode* head)
    {
        ListNode* temp = head;
        int cnt = 0;
        while(temp!= NULL)
        {
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = length(head);
        int pos = len-n;
        ListNode* temp = head;
        if(pos==0)
        {
            return head->next;
        }
        for(int i=0;i<pos-1;i++)
        {
            cout<<temp->val;
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};