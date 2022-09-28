class Solution {
public:
    int length(ListNode* head)
    {
        int cnt=0;
        ListNode* temp = head;
        while(temp)
        {
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL) return NULL;
        ListNode* temp = head;
        int len = length(head);
        int i=1;
        while(i<len/2){
            temp = temp->next;
            i++;
        }
        temp->next = temp->next->next;
        return head;
    }
};