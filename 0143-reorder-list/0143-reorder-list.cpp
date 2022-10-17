class Solution {
public:
    ListNode* mid(ListNode* head){
        ListNode* fast = head , *slow = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    ListNode* rev(ListNode* head){
        ListNode* cur = head , *prev = NULL , *next;
        while(cur != NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    
    void reorderList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return;
        ListNode* midVal = mid(head);
        ListNode* right = midVal->next;
        midVal->next = NULL;
        ListNode* rightHalf = rev(right);
        while(head && rightHalf){
            ListNode* temp = head->next;
            head->next = rightHalf;
            rightHalf = rightHalf->next;
            head->next->next = temp;
            head = temp;
        }
    }
};