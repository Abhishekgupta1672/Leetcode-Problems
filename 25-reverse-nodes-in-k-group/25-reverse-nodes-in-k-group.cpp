class Solution {
public:
    ListNode *reverse(ListNode* first , ListNode* last)
    {
        ListNode *prev = last;
        ListNode *next;
        while(first != last)
        {
            next = first->next;
            first->next = prev;
            prev = first;
            first = next;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        for(int i=0;i<k;i++)
        {
            if(temp==NULL)
                return head;
            temp = temp->next;
        }
        ListNode* newHead = reverse(head,temp);
        head->next = reverseKGroup(temp,k);
        return newHead;
    }
};