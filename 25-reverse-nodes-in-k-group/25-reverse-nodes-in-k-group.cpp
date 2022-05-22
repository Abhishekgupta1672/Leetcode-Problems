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
    ListNode *reverse(ListNode *first , ListNode* last)
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
        ListNode *temp = head;
        for(int i=0;i<k;i++)
        {
            if(temp==NULL)
                return head;
            temp = temp->next;
        }
        ListNode* newhead = reverse(head , temp);
        head->next = reverseKGroup(temp , k);
        return newhead;
    }
};