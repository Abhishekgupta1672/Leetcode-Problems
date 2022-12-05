class Solution {
public:
    int length(ListNode* head){
        ListNode* temp = head;
        int cnt = 0;
        while(temp != NULL){
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
    
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL) return NULL;
        ListNode* temp = head;
        int len = length(head);
        for(int i=1;i<len/2;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};