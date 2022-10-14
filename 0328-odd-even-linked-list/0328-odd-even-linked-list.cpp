class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return NULL;
        ListNode* odd = head , *even = head->next;
        ListNode* newList = head->next;
        while(odd->next != NULL && even->next != NULL){
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next = newList;
        return head;
    }
};