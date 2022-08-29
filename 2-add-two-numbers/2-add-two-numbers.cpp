/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int x = 0 , y = 0 ,carry = 0;
        ListNode* head = new ListNode() , *tail = head;
        while(l1 || l2 || carry)
        {
            if(l1)
            {
                x = l1->val;
                l1 = l1->next;
            }
            else x=0;
            if(l2)
            {
                y = l2->val;
                l2 = l2->next;
            }
            else y=0;
            
            int temp = x+y+carry;
            tail->next = new ListNode();
            tail->next->val = temp%10;
            tail = tail->next;
            carry = temp/10;
        }
        return head->next;
    }
};