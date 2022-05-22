class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL)
            return false;
        else if(head->next==NULL)
            return true;
        ListNode *newHead = NULL,*cur = head;
        while(cur!=NULL)
        {
            ListNode *newNode = new ListNode(cur->val);
            newNode->next = newHead;
            newHead = newNode;
            cur = cur->next;
        }
        while(head!=NULL && newHead!=NULL)
        {
            if(head->val != newHead->val)
                return false;
            head = head->next;
            newHead = newHead->next;
        }
        return (!newHead && !head);
    }
};