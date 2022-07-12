
class Solution {
public:
    ListNode* mid(ListNode* head)
    {
        ListNode* slow = head , *fast = head;
        while(fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL, *next , *cur = head;
        while(cur != NULL)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return;
        ListNode* midval = mid(head);
        ListNode* right = midval->next;
        midval->next = NULL;
        ListNode* rightHalf = reverse(right);
        while(head!=NULL && rightHalf!=NULL)
        {
            ListNode* temp = head->next;
            head->next = rightHalf;
            rightHalf = rightHalf->next;
            head->next->next = temp;
            head = temp;
        }
    }
};