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
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = nullptr , *next;
        if(head==nullptr || head->next ==nullptr)
            return head;
        while(head)
        {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
       return prev; 
    }
    
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* prev = dummy;
        for(int len=1;len<1e5 && head;len++)
        {
            ListNode* tail = head;
            ListNode* nexthead;
            int j=1;
            while(j<len && tail && tail->next)
            {
                tail = tail->next;
                j++;
            }
            nexthead = tail->next;
            
            if(j%2==0)
            {
                tail -> next = NULL;
                prev -> next = reverse(head);
                prev = head;
                head -> next = nexthead;
                head = nexthead;
            }
            else
            {
                prev = tail;
                head = nexthead;
            }
        }
        return dummy->next;
    }
};